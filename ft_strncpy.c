/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:38:55 by bbraga            #+#    #+#             */
/*   Updated: 2022/02/18 03:18:02 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/* #include	<stdio.h>

int	main()
{
	char	str1[] = "      ";
	char	str2[] = "42 Rio";

	printf("str1 = %s\n", str1);
	ft_strncpy(str1, str2, 6);
	printf("str1 = %s\n", str1);
	return (0);
} */