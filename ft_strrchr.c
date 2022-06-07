/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:37:35 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/07 13:18:07 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*ptr;
	char	chr;

	chr = (char) c;
	count = 0;
	ptr = 0;
	while (s[count] != '\0')
	{
		if (s[count] == chr)
			ptr = (char *)(s + count);
		count++;
	}
	if (s[count] == chr)
	{
		ptr = (char *)(s + count);
	}
	return (ptr);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	test[] = "Encontrador de letras.";
	const char	text = 'r';
	char		*ft_srchr;
	char		*srchr;

	ft_srchr = ft_strrchr(test, text);
	srchr = strrchr(test, text);

	printf("Result of ft_strrchr: %s\n", ft_srchr);
	printf("Result of strrchr: %s\n", srchr);
	return (0);
}*/
