/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:41:17 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/17 17:02:06 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)

{
	int t[10];
	int i;
	int min;
	int max;

	printf("Enter 10 numbers :\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &t[i]);
	}
	min = t[0];
	max = t[0];
	for (i = 0; i < 10; i++)
	{
		if (t[i] < min)
		{
			min = t[i];
		}
		if (t[i] > max)
		{
			max = t[i];
		}
	}
	printf("the minimum is: %d\n", min);
	printf("the maximun is: %d\n", max);
	return (0);
}