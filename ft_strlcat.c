/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:19:44 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/28 18:00:42 by bbraga           ###   ########.fr       */
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

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  src_len;
    size_t  dst_len;

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
