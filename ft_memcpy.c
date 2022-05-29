/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:24:55 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/28 15:23:10 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
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
