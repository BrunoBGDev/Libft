/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:37:35 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/16 14:50:32 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			ptr = (char *)(s + count);
		count++;
	}
	if (s[count] == c)
	{
		ptr = (char *)(s + count);
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	const char	test[] = "Encontrador de letras.";
	const char	text = 't';
	char		*i;

	i = ft_strrchr(test, text);

	printf("%s\n", i);
	return (0);
}*/
