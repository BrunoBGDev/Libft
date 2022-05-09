/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:48:55 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/09 15:52:13 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != (char)c)
		count++;
	if (str[count] == '\0')
		return (NULL);
	count++;	
	return ((char *)&str[count]);
}
