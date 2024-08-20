/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:31:40 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/25 14:42:29 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_strcmp("A", "B"));
	printf("\n%d", ft_strcmp("helloC", "helloA"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}*/
