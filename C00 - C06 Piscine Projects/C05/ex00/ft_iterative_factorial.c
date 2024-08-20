/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:48:31 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 11:27:22 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	result = 1;
	while (i < nb + 1)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int	main() {
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0));
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3));
    printf("Factorial of 7: %d\n", ft_iterative_factorial(7));
    return 0;
}*/
