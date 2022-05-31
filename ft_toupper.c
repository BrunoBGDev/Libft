/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:33:29 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 10:51:41 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	chr;
	char	chr2;
	char	ft_toup;
	char	toup;

	chr = 'c';
	chr2 = 'c';
	ft_toup = ft_toupper(chr);
	toup = toupper(chr2);

	printf("Result of ft_tolower: %c\n", ft_toup);
	printf("Result of tolower: %c\n", toup);
	return (0);
}*/
