/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:51:02 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/17 19:30:59 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	*sum_mat(double *mat1, double *mat2, double *sum, int size1, int size2)
{
	int i;

	for (i = 0; i < size1 * size2; i++)
	{
		*(sum + i) = *(mat1 + i) + *(mat2 + i);
	}
}