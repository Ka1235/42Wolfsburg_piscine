/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:51:02 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/18 15:48:40 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Écrire une fonction calculant la somme de deux matrices dont les éléments sont de type double. Les adresses des trois matrices et leurs dimensions (communes) seront transmises en argument.*/

double	*sum_mat(double *mat1, double *mat2, double *sum, int size1, int size2)
{
	int i;

	for (i = 0; i < size1 * size2; i++)
	{
		*(sum + i) = *(mat1 + i) + *(mat2 + i);
	}
}