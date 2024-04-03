/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:29:07 by vpere             #+#    #+#             */
/*   Updated: 2024/02/27 22:47:11 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(-50, 2));
}
*/
