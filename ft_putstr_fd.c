/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:43 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/05 12:38:23 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
}

/*#include	<stdio.h>

int	main(void)
{
	printf("Resultado de ft_putstr:\n");
	ft_putstr_fd("42 Rio a veia!\n", 1);
	return (0);
}*/
