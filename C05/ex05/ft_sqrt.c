/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 04:24:23 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/24 05:30:37 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb <= 0)
		return (0);
	while (root * root <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}

/* int	main(void)
{
	int x;
	x = ft_sqrt(170);
	printf("%d", x);
} */