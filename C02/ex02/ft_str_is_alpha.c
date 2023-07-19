/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:15:14 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 15:17:48 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	non_apha;

	counter = 0;
	non_apha = 0;
	while (str[counter] != '\0')
	{
		if (!(((str[counter] >= 65 && str[counter] <= 90)
					|| ((str[counter] >= 97 && str[counter] <= 122)))))
		{
			non_apha++;
		}
		counter++;
	}
	if (non_apha == 0)
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
	x = ft_str_is_alpha("strwer2");
	printf("%d", x);
	return (0);
} */