/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:25:31 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 00:20:30 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_len(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	left_to_cat;
	unsigned int	counter_dest;
	unsigned int	counter_src;
	unsigned int	result;

	result = ft_len(dest) + ft_len(src);
	left_to_cat = size - ft_len(dest) - 1;
	counter_dest = ft_len(dest);
	counter_src = 0;
	if (size == 0 || size <= ft_len(dest))
		return (ft_len(src) + size);
	while (src[counter_src] != '\0' && left_to_cat != 0)
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
		left_to_cat--;
	}
	dest[counter_dest] = '\0';
	return (result);
}

/* int main() {
	char dest[20] = "Hello, ";
	char src[] = "world!";
	unsigned int dest_size = sizeof(dest);

	printf("Test 1:\n");
	printf("Original dest: %s\n", dest);
	printf("Original src: %s\n", src);
	printf("Destination size: %u\n", dest_size);

	unsigned int result_len = ft_strlcat(dest, src, dest_size);
	printf("Concatenated string: %s\n", dest);
	printf("Resultant string length: %u\n", result_len);

	printf("\nTest 2:\n");
	char dest2[10] = "Short";
	char src2[] = "String";
	unsigned int dest2_size = sizeof(dest2);

	printf("Original dest: %s\n", dest2);
	printf("Original src: %s\n", src2);
	printf("Destination size: %u\n", dest2_size);

	unsigned int result2_len = ft_strlcat(dest2, src2, dest2_size);
	printf("Concatenated string: %s\n", dest2);
	printf("Resultant string length: %u\n", result2_len);

	return (0);
} */