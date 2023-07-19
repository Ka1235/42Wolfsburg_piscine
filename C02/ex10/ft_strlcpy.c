/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:58:54 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 17:00:05 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	size_of(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int				counter;
	unsigned int				src_length;
	unsigned int				dest_length;

	counter = 0;
	src_length = size_of(src);
	dest_length = size;
	while (src_length != 0 && dest_length != 0 && counter < size - 1)
	{
		dest[counter] = src[counter];
		src_length--;
		dest_length--;
		counter++;
	}
	dest[size - 1] = '\0';
	return (size_of(src));
}

/* int main(void)
{
	char	dest[20]  = "";
	unsigned int    test;
	test = ft_strlcpy(dest, "hello world !\n", 20);
	printf("%s", dest);
	printf("the source has a length of : %d\n", test);
	return (0);
} */