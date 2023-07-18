/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:05:23 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/18 15:45:59 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*Écrire, de deux façons différentes,
	un programme qui lit 10 nombres entiers dans un tableau avant d’en rechercher le plus grand et le plus petit :
● en utilisant le « formalisme pointeur », chaque fois que cela est possible.*/

int	minimun(int *t)
{
	int	min;
	int	i;

	min = *t;
	for (i = 0; i < 10; i++)
	{
		if (*(t + i) < min)
		{
			min = *(t + i);
		}
	}
	return (min);
}

int	maximun(int *t)
{
	int	max;
	int	i;

	max = *t;
	for (i = 0; i < 10; i++)
	{
		if (*(t + i) > max)
		{
			max = *(t + i);
		}
	}
	return (max);
}

int	main(void)
{
	int i;
	int t[10];

	printf("Enter 10 numbers\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", t + i);
	}

	printf("the minimun is: %d\n", minimun(t));
	printf("the naximun is: %d\n", maximun(t));
	return (0);
}