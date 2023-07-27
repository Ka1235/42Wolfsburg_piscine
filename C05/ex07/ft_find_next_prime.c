/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:55:24 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/27 15:00:53 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	cpt;
	int	i;

	i = 2;
	cpt = 0;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			cpt++;
		i++;
	}
	if (cpt == 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1 && nb < 2147483647)
		nb++;
	return (nb);
}

/* int	main(void)
{
	int x;
	x = ft_find_next_prime(11);
	printf("%d", x);
} */