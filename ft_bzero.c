/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:41:30 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/16 12:03:12 by bbraga           ###   ########.fr       */
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
	char	text[50] = "Test of the function.";

	printf("%s\n", text);	
	ft_bzero(text, 21);
	printf("%s\n", text);
	return (0);
}

