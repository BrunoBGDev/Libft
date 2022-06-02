/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:21:36 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/02 14:58:05 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	ft_mcpy(void *dest, const void *src, size_t n)
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

static char	*ft_sdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_slen(s1) + 1;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_mcpy(dst, s1, len);
	free(dst);
	return (dst);
}

static int	ft_check(long n)
{
	size_t	check;
	int	isneg;

	check = 0;
	isneg = 0;

	if(n < 0)
	{
		check++;
		isneg++;
		n = -n;
	}
	while (n >= 1)
	{
		check++;
		n /= 10;
	}
	return (check);
}

static char	*ft_tochar(char *rtn, long nbr, int len, int isneg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len +1));
	else
		return (ft_sdup("0"));
	if (!rtn)
		return (0);
	isneg = 0;
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '\0';
		nbr /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '\0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*ptr;
	long	nbr;
	int	isneg;

	nbr = n;
	len = ft_check(nbr);
	ptr = 0;
	isneg = 0;
	if (!(ptr = ft_tochar(ptr, nbr, len, isneg)))
		return (0);
	return (ptr);
}

#include <stdlib.h>
#include <stdio.h>

int main () 
{
	char	*val1;
	int		int1 = 855;

   val1 = ft_itoa(int1);
   printf("Int value on [int1] = %d\n", int1);
   printf("String value with ft_itoa = %s\n", val1);
   return(0);
}
