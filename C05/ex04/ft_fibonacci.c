/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:33:05 by vpere             #+#    #+#             */
/*   Updated: 2024/02/27 14:08:19 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	temp;

	temp = 0;
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_fibonacci(15));
}
*/
