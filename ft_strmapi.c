/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:29:37 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/01 15:28:03 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(char *str)
{
	size_t len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*str;
	
	count = 0;
	if (s != NULL && f != NULL)
	{
		while (s[count] != '\0')
		{
			malloc(str * ft_slen(char *)s);
			f(count, s[count]);
			count++;
		}
		str = s;
		free(str);
		return (str);
	}
}

static char	ft_tolw(unsigned int i, char chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 32;
	i = chr;
	return (i);
}	

#include <stdio.h>

int	main(void)
{
	char	text[] = "TEST OF FUNCTION";

	printf("[text] Before ft_striteri: %s\n", text);
	ft_strmapi(text, (ft_tolw));	
	printf("[text] After ft_striteri: %s\n", text);
	return (0);
}
