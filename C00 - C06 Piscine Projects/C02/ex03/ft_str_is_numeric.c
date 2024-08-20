/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:51:06 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/23 09:52:14 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
/*
#include <stdio.h>

int    main(void)
{
    int is_numeric;
    char a[] = "abc";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
*/
