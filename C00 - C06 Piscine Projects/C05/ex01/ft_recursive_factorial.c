/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:12:11 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 16:11:21 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial (nb -1));
}

/*#include <stdio.h>
   int main() {
    printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
    printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
    printf("Factorial of -3: %d\n", ft_recursive_factorial(-3));
    printf("Factorial of 7: %d\n", ft_recursive_factorial(7));
    return 0;
}*/
