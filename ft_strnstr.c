/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:04:02 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 09:33:06 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	c;
	size_t	s_len;
	char	*str_stack;

	count = 0;
	str_stack = (char *)haystack;
	s_len = ft_slen(needle);
	if (s_len == 0 || haystack == needle)
		return (str_stack);
	while (str_stack[count] != '\0' && count < len)
	{
		c = 0;
		while (str_stack[count + c] != '\0' && needle[c] != '\0'
			&& str_stack[count + c] == needle[c] && count + c < len)
			c++;
		if (c == s_len)
			return (str_stack + count);
		count++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*bigstring = "Cadete 42Rio!";
    const char	*smallstring = "42";
	char		*ft_sns;
	char		*sns;

	ft_sns = ft_strnstr(bigstring, smallstring, 9);
	sns = strnstr(bigstring, smallstring, 9);
	printf("The result of ft_strnstr: %s\n", ft_sns);
	printf("The result of strnstr: %s\n", sns);
	return (0);
}*/
