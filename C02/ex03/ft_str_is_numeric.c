/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:44:43 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:19:26 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	non_numeric;

	counter = 0;
	non_numeric = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 48 && str[counter] <= 57))
		{
			non_numeric++;
		}
		counter++;
	}
	if (non_numeric == 0)
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
	x = ft_str_is_numeric("12345678876a5432");
	printf("%d", x);
	return (0);
} */