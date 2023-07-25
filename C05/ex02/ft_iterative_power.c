/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 06:16:06 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/25 13:47:12 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	cpt;

	if (power < 0)
		return (0);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else
	{
		result = 1;
		cpt = 1;
		while (cpt <= power)
		{
			result *= nb;
			cpt++;
		}
		return (result);
	}
}
