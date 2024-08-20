/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:10:41 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/29 16:32:15 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*#include <stdio.h>

int main() {
    int index = 10;
    int result = ft_fibonacci(index);

    if (result != -1)
        printf("The Fibonacci number at index %d is %d.\n", index, result);
    else
        printf("Invalid index %d for Fibonacci sequence.\n", index);

    return 0;
}*/
