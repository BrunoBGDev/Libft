/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:41:30 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/10 13:47:25 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	text[50];

	strcpy(text, "Test of the function.");
	puts(text);

	ft_bzero(text, 5);
	puts(text);
	return (0);
}

