/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:28:53 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/09 15:52:18 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != (char)c)
		count++;
	if (str[count] == '\0')
		return (NULL);
	count++;	
	return ((char *)&str[count]);
}

#include <stdio.h>

int	main(void)
{
	const char	test[] = "Encontrador de letras.";
	const char	text = 'z';
	char		*i;

	i = ft_strchr(test, text);

	printf("%s\n", i);
	return (0);
}
