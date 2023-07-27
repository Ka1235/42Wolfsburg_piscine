/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 07:00:08 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/27 14:24:25 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0')
		&& s1[counter] == s2[counter])
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

void	str_permutation(char **str1, char **str2)
{
	char	*temp_str;

	temp_str = *str1;
	*str1 = *str2;
	*str2 = temp_str;
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[j], av[i]) < 0)
				str_permutation(&av[j], &av[i]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
