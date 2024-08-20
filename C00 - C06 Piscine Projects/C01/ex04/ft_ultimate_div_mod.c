/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 08:50:40 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/23 08:51:07 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>

int main()
{
	int a;
	int b;
	
	a = 5;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);	
}
*/
