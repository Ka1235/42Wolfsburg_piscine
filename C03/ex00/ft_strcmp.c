/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:14:57 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 03:35:32 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
		&& s1[counter] == s2[counter])
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

/* int	main(void)
{
	int x;

	x = ft_strcmp("Hella", "Hellz");
	printf("%d", x);
} */