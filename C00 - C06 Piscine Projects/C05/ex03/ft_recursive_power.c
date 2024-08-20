/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:40:39 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 14:07:15 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int main() {
    printf("2 to the power of 3: %d\n", ft_recursive_power(2, 3));// 8
    printf("5 to the power of 0: %d\n", ft_recursive_power(5, 0)); // 1
    printf("0 to the power of 0: %d\n", ft_recursive_power(0, 0));//1
    printf("2 to the power of -2: %d\n", ft_recursive_power(2, -2));// 0
    printf("3 to the power of 4: %d\n", ft_recursive_power(3, 4));// 81
    return 0;
}*/
