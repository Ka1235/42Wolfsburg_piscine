/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:12:38 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/17 18:49:55 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	tri_croissant(int *tab, int size)
{
	int i, j;
	int x;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (*(tab + j) < *(tab + i))
			{
				x = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = x;
			}
		}
	}
}