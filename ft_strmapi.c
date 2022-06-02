/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:29:37 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/02 12:47:14 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char *str)
{
	size_t len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	count;
	char	*str;
	
	count = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_slen((char *)s) + 1)))
		return (NULL);
	while (s[count] != '\0')
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}

/*static char	ft_tolw(unsigned int i, char chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 32;
	i = chr;
	return (i);
}	

#include <stdio.h>

int	main(void)
{
	char	text[] = "TEST OF FUNCTION";
	char	*func = ft_strmapi(text, (ft_tolw));

	printf("The original text is: %s\n", text);	
	printf("Result with ft_strmapi: %s\n", func);
	return (0);
}*/
