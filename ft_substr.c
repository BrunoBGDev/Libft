/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:29:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 08:38:27 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	ft_mcpy(void *dest, const void *src, size_t n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
		n--;
	}
}

static char	*ft_sdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_slen(s1) + 1;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_mcpy(dst, s1, len);
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rst;
	size_t	count;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_slen(s))
		return (ft_sdup(""));
	rst = malloc(sizeof(char) * (len + 1));
	count = 0;
	if (!rst)
		return (0);
	while (count < len)
	{
		rst[count] = *(s + start + count);
		count++;
	}
	rst[count] = '\0';
	return (rst);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[50] = "Teste de ft_substr em c! 42 Rio!";

	printf("%s\n", str);
	ft_substr(str, 0, 0);
	printf("%s\n", str);
	return (0);
}*/
