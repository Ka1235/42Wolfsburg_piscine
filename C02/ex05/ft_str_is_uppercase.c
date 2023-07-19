/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:00:50 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:25:38 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	non_uppercase;

	counter = 0;
	non_uppercase = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 65 && str[counter] <= 90))
		{
			non_uppercase++;
		}
		counter++;
	}
	if (non_uppercase == 0)
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
	str = "HELLOWORLD !";
	x = ft_str_is_uppercase(str);
	printf("%d", x);
	return (0);
} */