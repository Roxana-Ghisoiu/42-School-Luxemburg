/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:31:23 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/07/31 14:46:43 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(void)
{
	write(1, "z", 1);
       	write(1, "\n",1);
	return (0);	
}
