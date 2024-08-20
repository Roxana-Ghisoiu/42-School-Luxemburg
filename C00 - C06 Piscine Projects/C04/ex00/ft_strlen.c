/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:51:36 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/27 14:33:18 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{	
	char test_str[] = "Hello, World!";
	printf("Length of '%s' is %d\n", test_str, ft_strlen(test_str))
	return 0;
}*/
