/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:58:39 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/07 20:09:22 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_memcpy(dst, s1, len);
	return (dst);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "[result] After ft_strdup!";
	char	*result = NULL;

	printf("[result] Before ft_strmapi: %s\n", result);
	result = ft_strdup(src);
	printf("%s\n", result);
	return (0);
}*/
