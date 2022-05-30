/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:37:50 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 10:43:00 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	ascii = 'a';
	int	result1 = ft_isascii(ascii);
	int	result2 = isascii(ascii);

	printf("Result of ft_isascii is: %d \n", result1);
	printf("Result of isascii is: %d \n", result2);
	return (0);
}*/
