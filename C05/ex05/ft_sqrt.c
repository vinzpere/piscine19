/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:16:22 by vpere             #+#    #+#             */
/*   Updated: 2024/02/28 23:06:12 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i) != nb && i <= (nb / i) && i <= 46341)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(900000000));
}

