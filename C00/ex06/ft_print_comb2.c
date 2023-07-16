/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:03:07 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/16 16:08:27 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_int(int nbr)
{
	char	second_digit;
	char	first_digit;
	int		x;
	int		y;

	y = nbr % 10;
	x = (nbr - y) / 10;
	second_digit = y + '0';
	first_digit = x + '0';
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
}

void	end_comma(int a, int b)
{
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 01;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_int(a);
			write(1, " ", 1);
			write_int(b);
			end_comma(a, b);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/