/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:54:30 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 16:13:18 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}

/* int	main(void)
{
	char *x;
	char str[] = "HeLLo world IT'S SOOO GOOD TO BE ALIVE!";
	printf("%s \n", str);
	x = ft_strlowcase(str);
	printf("%s\n", x);
	return (0);
} */