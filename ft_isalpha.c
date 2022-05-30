/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:57:11 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 10:17:46 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	alpha = 'a';
	int	result1 = ft_isalpha(alpha);
	int	result2 = isalpha(alpha);

	printf("Result of ft_isalpha is: %d \n", result1);
	printf("Result of isalpha is: %d \n", result2);
	return (0);
}*/
