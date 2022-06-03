/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:19:44 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 09:37:19 by bbraga           ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_slen(dst);
	src_len = ft_slen(src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
	if ((dst_len + j) == dstsize && dst_len < dstsize)
		dst[i--] = '\0';
	else
		dst[i] = '\0';
	return (src_len + dst_len);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	start[] = "Aqui é..";
	char	end[] = " 42Rio!";
	int		ft_cat;
	int		stcat;
	
	ft_cat = ft_strlcat(start, end, 8);
	printf("Result of ft_strlcat: %d\n", ft_cat);
	stcat = strlcat(start, end, 8);
	printf("Result of strlcat: %d\n", stcat);
	return (0);
}*/
