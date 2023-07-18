/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:53:34 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/18 16:23:57 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

/*int	main(void)
{
	char	*str;

	str = "Hello!";
	ft_putstr(str);
	printf("this string contains %d caracters\n", ft_putstr(str));
	return (0);
}
*/