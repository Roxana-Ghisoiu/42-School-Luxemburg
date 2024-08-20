/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:00:28 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/23 14:23:15 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	len;

	len == 0;
	while (str[len])
		len++;
	write(1, str, len);
}
/*
#include <unistd.h>

int main(void)
{
	ft_putstr("Hey");
	return 0;
}
*/
