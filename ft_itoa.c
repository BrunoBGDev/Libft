/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:21:36 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 15:15:13 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		*(str + len) = n % 10 + '\0';
		n /= 10;
		len++;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '\0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
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
