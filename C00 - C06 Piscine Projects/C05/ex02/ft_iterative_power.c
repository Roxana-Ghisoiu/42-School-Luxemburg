/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:55:31 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 13:31:36 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>
int main() {
    printf("2 to the power of 3: %d\n", ft_iterative_power(2, 3)); //8
    printf("5 to the power of 0: %d\n", ft_iterative_power(5, 0)); //1
    printf("0 to the power of 0: %d\n", ft_iterative_power(0, 0)); //1
    printf("2 to the power of -2: %d\n", ft_iterative_power(2, -2)); // 0
    printf("3 to the power of 4: %d\n", ft_iterative_power(3, 4)); // 81
    return 0;
}*/
