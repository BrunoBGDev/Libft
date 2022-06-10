/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/10 13:32:20 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*rst;

	i = 0;
	rst = (char *)malloc(count * size);
	if (!rst)
		return (0);
	ft_bzero(rst, size * count);
	return ((void *)rst);
}
