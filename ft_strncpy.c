/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:38:55 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/02 20:13:59 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	count;

	count = 0;
	while (src[count] != '\0' && count < len)
	{
		dst[count] = src[count];
		count++;
	}
	while (count < len)
	{
		dst[count] = '\0';
		count++;
	}
	return (dst);
}

/*#include <stdio.h>

int	main()
{
	char	str1[] = "      ";
	char	str2[] = "42 Rio!";

	printf("[str1] Before ft_strncpy: %s \n", str1);
	ft_strncpy(str1, str2, 7);
	printf("[str1] After ft_strncpy: %s \n", str1);
	return (0);
}*/
