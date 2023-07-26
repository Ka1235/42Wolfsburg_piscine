/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 05:32:34 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/26 12:54:05 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* int	main(void)
{
	int x;
	x = ft_is_prime(21269);
	printf("%d", x);
	return (0);
} */