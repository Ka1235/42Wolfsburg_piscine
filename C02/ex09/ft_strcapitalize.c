/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:01:36 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 01:32:17 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	alpha_numeric(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	current;

	current = 1;
	if (lowercase(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[current] != '\0')
	{
		if (alpha_numeric(str[current]) == 1)
		{
			if (alpha_numeric(str[current - 1]) == 1
				&& uppercase(str[current]) == 1)
				str[current] += 32;
			if (alpha_numeric(str[current - 1]) == 0
				&& lowercase(str[current]) == 1)
				str[current] -= 32;
		}
		current++;
	}
	return (str);
}

/* int	main(void)
{
	char *x;
	char	str[] = "salut, commEnt tu vas ? 42Mots quarAnte-deux; cinquante+et+un";
	printf("%s \n", str);
	x = ft_strcapitalize(str);
	printf("%s\n", x);
	return (0);
} */
