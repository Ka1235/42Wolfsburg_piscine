/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:51:45 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 22:22:36 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	left_to_cpy;

	counter = 0;
	left_to_cpy = n;
	while (left_to_cpy != 0 && counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
		left_to_cpy--;
	}
	while (left_to_cpy > 0)
	{
		dest[counter] = '\0';
		counter++;
		left_to_cpy--;
	}
	return (dest);
}

/* int	main(void)
{
	char dest[20] = "";
	ft_strncpy(dest, "hello world!", 1);
	printf("%s", dest);
	return (0);
} */