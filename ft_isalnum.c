/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:23:53 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 09:23:21 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	alnum = '.';
	int	result1 = ft_isalnum(alnum);
	int	result2 = isalnum(alnum);

	printf("Result of ft_isalnum is: %d \n", result1);
	printf("Result of isalnum is: %d \n", result2);
	return (0);
}*/
