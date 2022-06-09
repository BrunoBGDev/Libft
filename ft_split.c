/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:20:22 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/08 21:42:23 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s, char c)
{
	size_t	nb;
	int		count;

	nb = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && nb == 0)
		{
			nb = 1;
			count++;
		}
		else if (*s == c)
			nb = 0;
		s++;
	}
	return (count);
}

static char	*ft_minitrim(const char *str, int start, int end)
{
	char	*chr;
	size_t	count;

	count = 0;
	chr = malloc(sizeof(char) * (end - start) + 1);
	if (!chr)
		return (0);
	while (start < end)
	{
		chr[count] = str[start];
		count++;
		start++;
	}
	chr[count] = '\0';
	return (chr);
}

char	**ft_split(const char *s, char c)
{
	int		index;
	char	**tab;
    size_t	i;
    size_t	j;

    tab = malloc(sizeof(char) * (ft_check(s, c)) + 1);
    if (!s || !tab)
        return (0);
    i = 0;
    j = 0;
    index = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
        {
            tab[j++] = ft_minitrim(s, index, i);
            index = -1;
        }
        i++;
    }
    tab[j] = 0;
    return (tab);
}
