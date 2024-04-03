/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:24:32 by vpere             #+#    #+#             */
/*   Updated: 2024/02/27 14:17:05 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nb2;

	nb2 = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb2 = nb2 * nb;
		nb--;
	}
	return (nb2);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(-71));
}
*/
