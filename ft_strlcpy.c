/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:09:12 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 09:30:26 by bbraga           ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	src_len;

	count = 0;
	src_len = ft_slen(src);
	if (!dstsize)
		return (src_len);
	while (src[count] != '\0' && count < dstsize)
	{
		dst[count] = src[count];
		count++;
	}
	if (dstsize < src_len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[count] = '\0';
	return (src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "Test of the function.";
	char	result[30] = "";

	printf("%s\n", result);
    ft_strlcpy(result, str1, 20);
    printf("%s\n", result);
	return (0);
}*/
