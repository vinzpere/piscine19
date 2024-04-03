/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:49:14 by vpere             #+#    #+#             */
/*   Updated: 2024/02/12 21:13:19 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	num1;
	int	num2;

	num1 = 50;
	num2 = 3;

	int	*ptr1;
	int	*ptr2;

	ptr1 = &num1;
	ptr2 = &num2;
	ft_div_mod(num1, num2, ptr1, ptr2);
	printf("%d %d", num1, num2);
}
*/
