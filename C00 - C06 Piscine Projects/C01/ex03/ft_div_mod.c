/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:12:30 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/22 18:19:24 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n", div);
    printf("%d\n", mod);

    return (0);
}*/
