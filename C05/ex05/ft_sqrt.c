/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 04:24:23 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/27 22:50:27 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int			low;
	int			high;
	long long	mid;

	if (nb <= 0)
		return (0);
	low = 1;
	high = nb;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

int	main(void)
{
	int x;
	x = ft_sqrt(2);
	printf("%d", x);
}