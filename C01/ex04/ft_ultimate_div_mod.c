/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:44:26 by vpere             #+#    #+#             */
/*   Updated: 2024/02/12 21:13:46 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}
/*
int	main()
{
	int	num1;
	int	num2;

	num1 = 60;
	num2 = 9;

	ft_ultimate_div_mod(&num1, &num2);
	printf("%d %d", num1, num2);
}
*/
