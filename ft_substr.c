/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:29:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/07 16:20:04 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rst;
	size_t	count;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	rst = malloc(sizeof(char) * (len + 1));
	count = 0;
	if (!rst)
		return (0);
	while (count < len)
	{
		rst[count] = *(s + start + count);
		count++;
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
