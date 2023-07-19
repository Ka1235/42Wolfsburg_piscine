/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:01:36 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 16:24:02 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	lowcase(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 1;
	if (lowcase(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[counter] != '\0')
	{
		if (str[counter - 1] == 32 && lowcase(str[counter]) == 1)
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
	char	str[] = "hello, je veaux manger la babnane de 42_Wolfsburg";
	printf("%s \n", str);
	x = ft_strcapitalize(str);
	printf("%s\n", x);
	return (0);
} */
