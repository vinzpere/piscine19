/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:27:02 by vpere             #+#    #+#             */
/*   Updated: 2024/02/11 13:28:42 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int	*a, int	*b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main()
{
	int	num1;
	int	num2;

	num1 = 6;
	num2 = 9;

	int	*ptr1;
	int	*ptr2;

	ptr1 = &num1;
	ptr2 = &num2;
	ft_swap(ptr1, ptr2);
	printf("%d %d", num1, num2);
}
*/
