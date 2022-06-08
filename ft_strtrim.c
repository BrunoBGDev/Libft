/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:22:52 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/08 15:45:48 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*rtrn;

	if (!s1)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	rtrn = ft_substr((char *)s1, 0, end + 1);
	return (rtrn);
}

/*#include <stdio.h>

int	main(void)
{
		char	string[] = "Test of function";
		char	trim[] = "func";
		char	*func = ft_strtrim(string, trim);

		printf("String before ft_strtrim: %s\n", string);
		printf("Result of ft_strtrim: %s\n", func);
		return (0);
}*/
