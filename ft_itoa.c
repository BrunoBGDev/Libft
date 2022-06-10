/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:21:36 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/10 14:28:44 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getnumbers(int n)
{
	size_t	count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long int	l_nbr;
	size_t		nbr;
	char		*rst;

	l_nbr = n;
	nbr = ft_getnumbers(n);
	if (n < 0)
	{
		l_nbr *= -1;
		nbr++;
	}
	rst = (char *)malloc(sizeof(char) * (nbr + 1));
	if (!rst)
		return (0);
	*(rst + nbr) = 0;
	while (nbr--)
	{
		*(rst + nbr) = l_nbr % 10 + '0';
		l_nbr = l_nbr / 10;
	}
	if (n < 0)
		*(rst + 0) = '-';
	return (rst);
}
