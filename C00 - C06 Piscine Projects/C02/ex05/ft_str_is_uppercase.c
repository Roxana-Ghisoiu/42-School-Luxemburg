/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:32:45 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/23 10:33:31 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int    main(void)
{
    int isupper;
    char a[] = "AAAAAAAAGH";
    isupper = ft_str_is_uppercase(a);
    printf("%d\n", isupper);
}
*/
