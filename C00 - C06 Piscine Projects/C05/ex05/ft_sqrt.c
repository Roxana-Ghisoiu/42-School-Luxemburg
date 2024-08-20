/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:49:41 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 15:34:17 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result * result < nb && result < nb / 2)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}

/*#include <stdio.h>

int main() {
    int number = 16;
    int sqrt_result = ft_sqrt(number);
    if (sqrt_result != 0)
        printf("The integer square root of %d is %d.\n", number, sqrt_result);
    else
        printf("%d is not a perfect square.\n", number);

    return 0;
}*/
