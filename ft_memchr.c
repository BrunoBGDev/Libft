/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:13:48 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/06 12:42:03 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*str;

	str = (const char *) s;
	count = 0;
	while (count < n)
	{
		if (str[count] == c)
			return ((void *)(s + count));
		count++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	string[] = "Function testing...";
	char	ch = 't';
	char	*ft_m = ft_memchr(string, ch, 4);
	char	*memc = memchr(string, ch, 4);

	printf("The string before ft_memchr: %s\n", string);
	printf("The string after ft_memchr: %s\n", ft_m);
	printf("\n");
	printf("The string before memchr: %s\n", string);
	printf("The string after memchr: %s\n", memc);
	return (0);
}*/
