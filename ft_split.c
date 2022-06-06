/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:20:22 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/06 11:49:12 by bbraga           ###   ########.fr       */
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

static char	**ft_mallock(char **str, const char *s, char c)
{
	size_t	count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
			count++;
		else if (j > 0 && s[j - 1] != c)
		{
			str[i] = malloc(sizeof(char) * (count + 1));
			if (!str[count])
				return (0);
			count = 0;
			i++;
		}
		if (s[j + 1] == '\0' && s[j] != c)
		{
			str[i] = malloc(sizeof(char) * count + 1);
			if (!str[i])
				return (0);
		}
		j++;
	}
	return (str);
}

static char	**ft_strcpy(char **str, const char *s, char c)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
			str[count][i++] = s[j];
		else if (j > 0 && s[j - 1] != c)
		{
			if (j != 0)
			{
				str[count][i] = '\0';
				i = 0;
				count++;
			}
		}
		if (s[j + 1] == '\0' && s[j] != c)
			str[count][i] = '\0';
		j++;
	}
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**rtn;
	int		nbr;

	if (!s)
	{
		rtn = malloc(sizeof(char *) * 1);
		if (!rtn)
			return (0);
		*rtn = 0;
		return (rtn);
	}
	nbr = ft_check(s, c);
	rtn = malloc(sizeof(char *) * (nbr + 1));
	if (!rtn)
		return (0);
	else if (ft_mallock(rtn, s, c) != 0)
		ft_strcpy(rtn, s, c);
	rtn[nbr] = 0;
	return (rtn);
}
