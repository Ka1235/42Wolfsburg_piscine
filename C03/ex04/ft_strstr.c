/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnguecho <jnguecho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:03:13 by jnguecho          #+#    #+#             */
/*   Updated: 2023/07/20 19:39:27 by jnguecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_to_find;

	if (*to_find == '\0')
	{
		return (str);
	}
	else
	{
		while (*str != '\0')
		{
			temp_str = str;
			temp_to_find = to_find;
			while (*temp_to_find != '\0' && *temp_str == *temp_to_find)
			{
				temp_str++;
				temp_to_find++;
			}
			if (*temp_to_find == '\0')
				return (str);
			str++;
		}
		return ((void *)0);
	}
}

/* int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    char to_find1[] = "quick";
    char to_find2[] = "dog";
    char to_find3[] = "cat";
    char *result1 = ft_strstr(str, to_find1);
    char *result2 = ft_strstr(str, to_find2);
    char *result3 = ft_strstr(str, to_find3);
    if (result1) {
        printf("'%s' found at position: %ld\n", to_find1, result1 - str);
    } else {
        printf("'%s' not found.\n", to_find1);
    }
    if (result2) {
        printf("'%s' found at position: %ld\n", to_find2, result2 - str);
    } else {
        printf("'%s' not found.\n", to_find2);
    }
    if (result3) {
        printf("'%s' found at position: %ld\n", to_find3, result3 - str);
    } else {
        printf("'%s' not found.\n", to_find3);
    }
    return 0;
} */
