/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:28:53 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/09 12:21:08 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != (char)c)
	{
		if (!s[count++])
			return (0);
	}
	return ((char *)&s[count]);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	test[] = "Encontrador de letras.";
	const char	text = 'o';
	char		*ft_schr;
	char		*schr;

	ft_schr = ft_strchr(test, text);
	schr = strchr(test, text);
	
	printf("Result of ft_strchr: %s\n", ft_schr);
	printf("Result of strchr: %s\n", schr);
	return (0);
}*/
