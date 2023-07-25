/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 04:13:27 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 05:04:10 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	nbr;

	nbr = nb;
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

/* int	main(void)
{
	ft_putnbr(-4578986);
	return (0);
} */