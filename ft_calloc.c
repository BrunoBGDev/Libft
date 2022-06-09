/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/08 21:09:04 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*rst;

	i = 0;
	rst = (char *)malloc(count * size);
	if (!rst)
		return (0);
	ft_bzero(rst, size * count);
	return ((void *)rst);
}

/*#include <stdio.h>
int main()
{
	 int i, * ptr, sum = 1;
	 ptr = ft_calloc(15, sizeof(int));
   	 if (ptr == NULL) {
		 printf("Error! memory not allocated.");
		 exit(0);
        }
	 printf("Building and calculating the sequence sum of the first 10 terms \n ");
	 for (i = 0; i < 10; ++i) { * (ptr + i) = i;
		 sum += * (ptr + i);
        }
	 printf("Sum = %d", sum);
	 free(ptr);
	 return 0;
}*/
