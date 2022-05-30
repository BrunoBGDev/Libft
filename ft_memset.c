/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:45:44 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 14:26:49 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	count;

	count = 0;
	while (len > 0)
	{
		((unsigned char *)b)[count++] = (unsigned char)c;
		len--;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Function test";
	char	str2[] = "Function test";
	char	chr = 'x';

	ft_memset(str, chr, 8);
	printf("Result of ft_memset: %s\n", str);
	memset(str2, chr, 8);
	printf("Result of memset: %s\n", str);
	return (0);
}*/
