/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:28:53 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 08:43:06 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != (char)c)
		count++;
	if (s[count] == '\0')
		return (0);
	count++;
	return ((char *)&s[count]);
}

/*#include <stdio.h>

int	main(void)
{
	const char	test[] = "Encontrador de letras.";
	const char	text = 'z';
	char		*i;

	i = ft_strchr(test, text);

	printf("%s\n", i);
	return (0);
}*/
