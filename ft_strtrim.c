/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:22:52 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/02 19:29:40 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	end;
	char	*rtrn;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	count = 0;
	end = ft_strlen(s1);
	while (check_set(s1[count], set) == 0)
		count++;
	if (count == ft_strlen(s1))
	{
		if (!(rtrn = ft_strdup("")))
			return (NULL);
		else
			return (rtrn);
	}
	while (check_set(s1[end - 1], set) == 0)
		end--;
	rtrn = ft_substr(s1, count, end - count);
	return (rtrn);
}
