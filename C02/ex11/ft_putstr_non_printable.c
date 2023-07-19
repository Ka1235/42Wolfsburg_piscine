/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:20:44 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/19 18:44:46 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	unprintable_char(char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	next_char(char c)
{
	return (c + 1);
}

char	dec_to_hex(int dec)
{
	if (dec == 10)
	{
		return ('a');
	}
	if (dec >= 11 && dec <= 15)
	{
		return (next_char(dec_to_hex(dec - 1)));
	}
	else
	{
		return (dec + '0');
	}
}

void	print_unprintable(char *adr_char)
{
	int		dec;
	int		first_hex_int;
	int		second_hex_int;
	char	first_hex_char;
	char	second_hex_char;

	dec = *adr_char - 0;
	first_hex_int = dec / 16;
	second_hex_int = dec % 16;
	first_hex_char = dec_to_hex(first_hex_int);
	second_hex_char = dec_to_hex(second_hex_int);
	write(1, "\\", 1);
	write(1, &first_hex_char, 1);
	write(1, &second_hex_char, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		if (unprintable_char(str[counter]) == 1)
		{
			print_unprintable(str + counter);
		}
		else
		{
			write(1, str + counter, 1);
		}
		counter++;
	}
}

/* int main(void)
{
   char    *str;
   str = "hello \r world!";
   ft_putstr_non_printable(str);
   return (0);
}  */