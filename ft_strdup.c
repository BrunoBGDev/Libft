/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:58:39 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 09:48:09 by bbraga           ###   ########.fr       */
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

char	*ft_strdup(const char *s1)
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
