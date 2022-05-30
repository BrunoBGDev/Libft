/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:17:56 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 11:01:53 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	digit = '0';
	int	result1 = ft_isdigit(digit);
	int	result2 = isdigit(digit);

	while (digit <= '9')
	{
		printf("Number tested: %s\n", &digit);
		printf("Result of ft_isdigit is: %d \n", result1);
		printf("Result of isdigit is: %d \n", result2);
		digit++;
	}
	if (digit != result1)
		printf("Not a digit.\n");
	return (0);
}*/
