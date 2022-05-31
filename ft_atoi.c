/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:22:08 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 12:25:01 by bbraga           ###   ########.fr       */
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

/*#include <stdlib.h>
#include <stdio.h>

int main () {
   int	val1;
   int	val2;
   char str1[] = "855";
   char	str2[] = "855";

   val1 = ft_atoi(str1);
   printf("String value on ft_atoi = %s, Int value = %d\n", str1, val1);
   val2 = atoi(str2);
   printf("String value on atoi = %s, Int value = %d\n", str2, val2);
   return(0);
}*/
