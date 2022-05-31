/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:41:30 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 11:59:51 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*str;

	count = 0;
	str = (unsigned char *)s;
	while (count < n)
	{
		str[count] = 0;
		count++;
	}
	s = str;
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	text[] = "Test of the function.";
	char	text2[] = "Test of the function.";

	printf("[text] Before ft_bzero: %s\n", text);	
	ft_bzero(text, 1);
	printf("[text] After ft_bzero: %s\n", text);
	printf("\n");
	printf("[text2] Before bzero: %s\n", text2);
	bzero(text2, 1);
	printf("[text2] After bzero: %s\n", text2);
	return (0);
}*/
