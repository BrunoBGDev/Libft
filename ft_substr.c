/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:29:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/08 15:47:57 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rst;
	size_t	count;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		rst = (char *)malloc(sizeof(char));
		*rst = '\0';
		return (rst);
	}
	rst = (char *)malloc(sizeof(char) * len);
	if (!rst)
		return (0);
	rst[0] = '\0';
	count = 0;
	while (len > 0)
	{
		rst[count] = s[start];	
		count++;
		start++;
		len--;
	}
	rst[count] = '\0';
	return (rst);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[50] = "Teste de ft_substr em c! 42 Rio!";

	printf("%s\n", str);
	ft_substr(str, 0, 0);
	printf("%s\n", str);
	return (0);
}*/
