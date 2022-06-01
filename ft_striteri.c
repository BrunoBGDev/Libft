/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:14:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/01 09:37:57 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	count;

	count = 0;
	if (s != NULL && f != NULL)
	{
		while (s[count] != '\0')
		{
			f(count, &s[count]);
			count++;
		}
	}
}

/*static void	ft_tolw(unsigned int i, char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		str[count] += 32;
		count++;
	}
	i = str[count];
}	

#include <stdio.h>

int	main(void)
{
	char	text[] = "TEST OF FUNCTION";

	printf("[text] Before ft_striteri: %s\n", text);
	ft_striteri(text, (ft_tolw));	
	printf("[text] After ft_striteri: %s\n", text);
	return (0);
}*/
