/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:13:48 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/28 18:02:10 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;
	const int			*chr;
	const unsigned char	*str;

	chr = &c;
	str = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		if (str[count] != chr)
			count++;
		else if (str[count] == '\0')
		count++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	test[20] = "Teste memchr.";
	
	printf("%s\n", test);
	ft_memchr(test, 'e', 15);
	printf("%s\n", test);
}*/
