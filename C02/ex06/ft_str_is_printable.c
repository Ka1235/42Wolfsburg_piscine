/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:13:36 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:55:06 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	non_printable;

	counter = 0;
	non_printable = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 0 && str[counter] <= 31) || str[counter] == 127)
		{
			non_printable++;
		}
		counter++;
	}
	if (non_printable == 0)
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
	x = ft_str_is_printable("Hallo!`\n");
	printf("%d", x);
	return (0);	
} */