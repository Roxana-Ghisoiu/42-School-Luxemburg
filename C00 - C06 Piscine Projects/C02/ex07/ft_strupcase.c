/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:25:24 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/23 11:26:21 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "fhjdhfjhfjhfkjdsf";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 
*/
