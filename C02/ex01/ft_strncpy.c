/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:51:45 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:15:29 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (n != 0 && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[n] = '\0';
	return (dest);
}

/* int	main(void)
{
	char dest[15];
	ft_strncpy(dest, "hello world!", 8);
	printf("%s", dest);
	return (0);
} */