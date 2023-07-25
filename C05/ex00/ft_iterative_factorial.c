/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 05:59:34 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 06:10:35 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
}
