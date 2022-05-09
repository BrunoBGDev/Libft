/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbraga <bruno.braga.design@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:32:04 by bbraga            #+#    #+#             */
/*   Updated: 2022/02/18 03:16:14 by bbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*end;
	int		count;

	end = dest;
	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (end);
}

/* #include <stdio.h>

int	main()
{
	char	str1[] = "42 São Paulo...";
	char	str2[] = "42 Rio";
	
	printf("Só tinha a %s\n", str1);
	ft_strcpy(str1, str2);
	printf("Agora tem a %s!\n", str1);
	return (0);
} */