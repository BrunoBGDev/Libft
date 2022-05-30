/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:30:27 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 12:31:36 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	count;

	count = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
	{
		while (len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		while (count < len)
		{
			((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
			count++;
		}
	}
	return ((unsigned char *)dst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "Oldstring";
	char	source[] = "Newstring";
	char	dest2[] = "Oldstring";
	char	source2[] = "Newstring";

	printf("Before ft_memmove dest = %s | source = %s\n", dest, source);
	ft_memmove(dest, source, 2);
	printf("After ft_memmove dest = %s  | source = %s\n", dest, source);
	printf("\n");
	printf("Before memmove dest2 = %s | source2 = %s\n", dest2, source2);
	memmove(dest2, source2, 2);
	printf("After memmove dest2 = %s | source2 = %s\n", dest2, source2);
}*/
