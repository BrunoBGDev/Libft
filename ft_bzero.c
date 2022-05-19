/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:41:30 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/19 15:09:18 by bbraga           ###   ########.fr       */
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

/*#include <stdio.h>

int	main(void)
{
	char	text[50] = "Test of the function.";

	printf("%s\n", text);	
	ft_bzero(text, 1);
	printf("%s\n", text);
	return (0);
}*/
