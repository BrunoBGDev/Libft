/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:09:33 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/31 12:44:32 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text1[] = "Test of the function";
	char	text2[] = {'T', 'e', 's', 't'};

	printf("Result of [text1] with ft_strlen: %zu\n", ft_strlen(text1));
	printf("Result of [text2] with ft_strlen: %zu\n", ft_strlen(text2));
	printf("\n");
	printf("Result of [text1] with strlen: %zu\n", strlen(text1));
	printf("Result of [text2] with strlen: %zu\n", strlen(text2));
	return (0);
}
