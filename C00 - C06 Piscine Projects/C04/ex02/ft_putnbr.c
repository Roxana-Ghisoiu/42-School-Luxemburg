/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:57:06 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/27 16:11:24 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}

/*int	main() {
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-42);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    return 0;
}*/
