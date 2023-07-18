/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:11:50 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/18 16:24:01 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	permutation(int *first, int *second)
{
	int	temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		permutation((tab + i), (tab + j));
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int	tab[10];

	tab[10] = {1, 2, 3, 4, 5, 15, 14, 13, 12, 11};
	printf("\n\n###Before reversing###\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", tab[i]);
	}
	ft_rev_int_tab(tab, 10);
	printf("\n\n###After reversing###\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", tab[i]);
	}
	return (0);
}
*/