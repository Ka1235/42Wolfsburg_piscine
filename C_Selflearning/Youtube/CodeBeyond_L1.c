/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CodeBeyond_L1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:09:13 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/26 15:57:26 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Exercise : https://codeforces.com/problemset/problem/1294/C
	Video : https://youtu.be/FcsUvBywY1U

C. Product of Three Numbers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given one integer number 𝑛
. Find three distinct integers 𝑎,𝑏,𝑐
 such that 2≤𝑎,𝑏,𝑐
 and 𝑎⋅𝑏⋅𝑐=𝑛
 or say that it is impossible to do it.

If there are several answers, you can print any.

You have to answer 𝑡
 independent test cases.
  */

int	min(int a, int b)
{
	return (a <= b ? a : b);
}

int	main(void)
{
	int	nb;
	int	a;
	int	b;
	int	c;

	printf("Enter a positive number");
	sconf("%d", &nb);
	a = 1;
	b = 1;
	c = 1;
	for (int i = 2; i * i <= nb; i++)
	{
		if (nb % i == 0)
		{
			a = i;
			break ;
		}
	}
	nb = nb / a;
	for (int i = 0; i * i <= nb; i++)
	{
		if (nb % i == 0)
		{
			if (i != a)
			{
				b = min(b, i);
			}
			if (i != (nb / i))
			{
				if ((nb / i) != i)
				{
					b = min(b, nb / i);
				}
			}
		}
	}
	c = nb / b;
	if (a != b && b != c && c != 1)
		printf(" A possible combination is : %d, %d, %d", a, b, c);
	else
		printf("There is no possible combination");
	return (0);
}
