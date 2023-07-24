/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:58:54 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/24 03:12:25 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	size_of(const char *str)
// Corrected function signature with const char* for input string
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
	unsigned int	counter;
	unsigned int	src_length;
	unsigned int	dest_length;

	dest_length = size;
	counter = 0;
	src_length = size_of(src);
	if (size != 0)
	{
		while (src_length > 0 && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (src_length);
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