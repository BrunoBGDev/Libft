/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:34:34 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/30 08:37:09 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	ft_mcpy(void *dest, const void *src, size_t n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
		n--;
	}
}

static char	*ft_sdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_slen(s1) + 1;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_mcpy(dst, s1, len);
	return (dst);
}

static void	*ft_mmove(void *dest, const void *src, size_t len)
{
	unsigned int	count;

	count = 0;
	if (((unsigned char *)src) < ((unsigned char *)dest))
		while (len)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	else
		while (count < len)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count++;
		}
	return ((unsigned char *)dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	rst_len;
	char	*join;

	if (!s1 && !s2)
		return (ft_sdup(""));
	else if (s1 && !s2)
		return (ft_sdup(s1));
	else if (!s1 && s2)
		return (ft_sdup(s2));
	s1_len = ft_slen((char *)s1);
	s2_len = ft_slen(s2);
	rst_len = s1_len + s2_len + 1;
	join = malloc(sizeof(char) * rst_len);
	if (!join)
		return (0);
	ft_mmove(join, s1, s1_len);
	ft_mmove(join + s1_len, s2, s2_len);
	join[rst_len - 1] = '\0';
	return (join);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "42";
	char	str2[] = "Rio";
	char	*result = ft_strjoin(str1, str2);

	printf("%s\n", result);
	return (0);
}*/
