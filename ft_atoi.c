/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:22:08 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 08:56:33 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isnbr(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	count;
	long	nbr;
	int		ngnbr;

	count = 0;
	nbr = 0;
	ngnbr = 0;
	while (str[count] != '\0' && (str[count] == 32
			|| str[count] == '\t' || str[count] == '\n'
			|| str[count] == '\r' || str[count] == '\v'
			|| str[count] == '\f'))
		count++;
	if (str[count] != '\0' && str[count] == '-')
	{
		ngnbr = 1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (str[count] != '\0' && ft_isnbr(str[count]))
		nbr = (nbr * 10) + (str[count++] - '0');
	if (ngnbr == 1)
		return (-nbr);
	return (nbr);
}

/*#include <stdio.h>

int main () {
   int val;
   char str[20] = "Test";

   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   return(0);
}*/
