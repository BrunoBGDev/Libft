/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:43 by bbraga            #+#    #+#             */
/*   Updated: 2022/05/05 11:58:01 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

/* #include	<stdio.h>

int	main(void)
{
	printf("Resultado de ft_putstr:\n");
	ft_putstr("42 Rio a veia!\n");
	return (0);
} */
