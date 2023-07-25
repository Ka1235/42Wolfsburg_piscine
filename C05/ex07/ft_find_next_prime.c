/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:55:24 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/24 06:04:36 by jnguecho         ###   ########.fr       */
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
	while (i <= (nb / 2))
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
	int	next_prime;

	next_prime = nb;
	while (0 != 1)
	{
		if (ft_is_prime(next_prime) == 1)
			return (next_prime);
		next_prime++;
	}
}

/* int	main(void)
{
	int x;
	x = ft_find_next_prime(11);
	printf("%d", x);
} */