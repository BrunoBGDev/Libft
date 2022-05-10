/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 08:45:44 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/10 13:48:31 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		((unsigned char *)str)[count++] = (unsigned char)c;
		n--;
	}
	return (str);
}
