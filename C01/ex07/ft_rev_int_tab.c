/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:39:35 by vpere             #+#    #+#             */
/*   Updated: 2024/02/12 13:15:56 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int	main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
