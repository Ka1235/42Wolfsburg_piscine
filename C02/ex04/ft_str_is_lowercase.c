/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:55:53 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:21:33 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	non_lowercase;

	counter = 0;
	non_lowercase = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 97 && str[counter] <= 122))
		{
			non_lowercase++;
		}
		counter++;
	}
	if (non_lowercase == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int	main(void)
{
	int x;
	char *str;
	str = "helloworld";
	x = ft_str_is_lowercase("str2");
	printf("%d", x);
	return (0);
} */