/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:24:55 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 12:15:27 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
		count++;
		n--;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "42Rio!";
	char	dest[] = "Cadete ";
	char	dest2[] = "Cadete";
	char	*ft_mcpy;
	char	*mcpy;
	
	printf("[dest] Before ft_memcpy: %s\n", dest);
	ft_mcpy = ft_memcpy(dest, source, 6);
	printf("[dest] After ft_memcpy: %s\n", dest);
	printf("\n");
	
	printf("[dest2] Before memcpy: %s\n", dest2);
	mcpy = memcpy(dest2, source, 6);
	printf("[dest2] After memcpy: %s\n", dest2);
	return (0);
}*/
