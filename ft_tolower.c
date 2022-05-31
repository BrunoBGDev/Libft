/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:16 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 10:49:28 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	chr;
	char	chr2;
	char	ft_tolw;
	char	tolw;

	chr = 'A';
	chr2 = 'A';
	ft_tolw = ft_tolower(chr);
	tolw = tolower(chr2);

	printf("Result of ft_tolower: %c\n", ft_tolw);
	printf("Result of tolower: %c\n", tolw);
	return (0);
}*/
