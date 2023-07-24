/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:20:44 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/23 02:54:14 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	printable_char(char c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (printable_char(str[cpt]) == 1)
		{
			write(1, str + cpt, 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_putchar("01234567789abcdef"[str[cpt] / 16]);
			ft_putchar("01234567789abcdef"[str[cpt] % 16]);
		}
		cpt++;
	}
}

/* int main(void)
{
   char    *str;
   str = "hello \r world!";
   ft_putstr_non_printable(str);
   return (0);
}  */