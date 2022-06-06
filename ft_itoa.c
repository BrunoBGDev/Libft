/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:21:36 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/05 12:25:47 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(long n)
{
	size_t	check;

	check = 0;
	if (n < 0)
	{
		check++;
		n = -n;
	}
	while (n >= 1)
	{
		check++;
		n /= 10;
	}
	return (check);
}

static char	*ft_mall(char *rtn, long nb, int len, int isneg)
{
		rtn = ft_strdup("0");
	if (nb != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn);
	if (!rtn)
		return (0);
	isneg = 0;
	if (nb < 0)
	{
		isneg++;
		nb = -nb;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nb % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		check;
	char	*rtn;
	int		negnb;

	check = ft_check(n);
	negnb = 0;
	rtn = 0;
	rtn = ft_mall(rtn, n, check, negnb);
	if (!rtn)
		return (0);
	return (rtn);
}

/*#include <stdlib.h>
#include <stdio.h>

int main () 
{
	char	*val1;
	int		int1 = -855;

   val1 = ft_itoa(int1);
   printf("Int value on [int1] = %d\n", int1);
   printf("String value with ft_itoa = %s\n", val1);
   return(0);
}*/
