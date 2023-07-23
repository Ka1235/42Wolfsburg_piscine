/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 06:51:46 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/22 23:59:27 by jnguecho         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	counter_src;

	counter_dest = ft_strlen(dest);
	counter_src = 0;
	while (src[counter_src] != '\0')
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = src[counter_src];
	return (dest);
}

/* int	main(void)
{
	char *x;
	char s1[100] = "What a good time";
	x = ft_strcat(s1, "to be alive !!!");
	printf("%s", x);
} */