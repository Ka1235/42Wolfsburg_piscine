/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 06:23:14 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 23:08:28 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0' && counter < n
		&& s1[counter] == s2[counter])
	{
		counter++;
	}
	if (counter == n)
		return (0);
	return (s1[counter] - s2[counter]);
}

/* int	main(void)
{
	int x;

	x = ft_strncmp("Hellaa", "Hellao", 16);
	printf("%d", x);
} */