/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 22:22:53 by vpere             #+#    #+#             */
/*   Updated: 2024/02/27 22:38:05 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	if (power < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(5, 0));
}
*/
