/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rghisoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:59:19 by rghisoiu          #+#    #+#             */
/*   Updated: 2024/08/01 15:02:39 by rghisoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return(0);
}
