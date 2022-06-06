/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:19:44 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/05 13:04:46 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != 0)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*str;
	size_t	count;
	size_t	rtn;
	size_t	src_len;
	size_t	dst_len;

	str = (char *)src;
	dst_len = ft_slen(dst);
	src_len = ft_slen(str);
	rtn = 0;
	count = 0;
	if (dstsize > dst_len)
		rtn = src_len + dst_len;
	else
		rtn = src_len + dstsize;
	while (str[count] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = str[count];
		dst_len++;
		count++;
	}		
	dst[dst_len] = '\0';
	return (rtn);
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
