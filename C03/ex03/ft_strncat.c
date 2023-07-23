/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:37:46 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/20 07:56:50 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_src;
	unsigned int	left_to_cat;

	counter_dest = ft_strlen(dest);
	counter_src = 0;
	left_to_cat = nb;
	while (src[counter_src] != '\0' && left_to_cat != 0)
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
		left_to_cat--;
	}
	dest[counter_dest] = '\0';
	return (dest);
}

/* int	main(void)
{
	char *x;
	char s1[100] = "What a good time";
	x = ft_strncat(s1, " to be alive !!!", 14);
	printf("%s", x);
} */