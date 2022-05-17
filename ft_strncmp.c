/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:35:22 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/17 10:27:27 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (count < n - 1 && s1[count] != '\0'
		&& s2[count] != '\0' && s1[count] == s2[count])
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[20] = "coom";
	char	test2[20] = "cpSTE";
	int		func = 0;
	
	func = ft_strncmp(test1, test2, 4);

	printf("%d\n", func);
}*/