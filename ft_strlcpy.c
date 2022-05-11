/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:09:12 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/11 14:28:17 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	count;

	if (dstsize > 0)
	{
		count =0;
		while( *(src[count]) != '\0')
		{
			if
				(count == dstsize);
				count--;
				break;
		}
		*(dst[count]) = *(src[count]);
		count++;
	}
	*(dst[count]) = '\0';

	while (*(src[count]) !='\0')
		count++;
	return (count);
}
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Test of the function.";
	char	result[30] = "";
	int		function = ft_strlcpy(result, str1, 5);

	printf("%s\n", result);
	return (0);
}

