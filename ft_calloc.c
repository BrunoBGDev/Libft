/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:19:01 by bbraga            #+#    #+#             */
/*   Updated: 2022/06/03 15:39:27 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
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
