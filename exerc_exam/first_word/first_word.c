/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:08:39 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/08/01 11:47:12 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{	
	int i;

	if(ac == 2)
	{
		char *str = av[1];

		while (*str == ' ' || *str == '\t')
			str++;

		while (*str && *str != ' ' && *str != '\t')
		{
			ft_putchar(*str);
			str++;
		}
		   ft_putchar('\n');
		   return(0);
	}
	else
	{
		return (1);
	}
}
