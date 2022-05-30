/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:53:19 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 11:06:23 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	print = '\n';
	int	result1 = ft_isprint(print);
	int	result2 = isprint(print);

	printf("Result of ft_isprint is: %d \n", result1);
	printf("Result of isprint is: %d \n", result2);
	return (0);
}*/
