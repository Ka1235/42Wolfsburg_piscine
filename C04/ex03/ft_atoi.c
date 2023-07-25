/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 05:09:43 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/24 04:11:52 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str != '\0')
	{
		if (*str != '-' && (*str == ' ' || (!(*str >= '0' && *str <= '9'))))
			str++;
		if (*str == '-')
		{
			sign = sign * -1;
			str++;
		}
		if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
			if (!(*(str + 1) >= '0' && *(str + 1) <= '9'))
				break ;
		}
		str++;
	}
	return (res * sign);
}

/* int	main(void)
{
	int x;
	x = ft_atoi(" ---+--+12340b567");
	printf("%d", x);
} */