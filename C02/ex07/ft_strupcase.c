/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:31:23 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 16:05:16 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}

/* int	main(void)
{
	char *x;
	char str[] = "Hello world !";
	printf("%s \n", str);
	x = ft_strupcase(str);
	printf("%s\n", x);
	return (0);
} */