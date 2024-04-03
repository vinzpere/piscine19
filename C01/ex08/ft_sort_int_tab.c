/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:06:36 by vpere             #+#    #+#             */
/*   Updated: 2024/02/15 11:54:57 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	k = 0;
	temp = 0;
	while (k <= size)
	{
		i = k + 1;
		while (i <= size - 1)
		{
			if (tab[i] < tab[k])
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			}
			i++;
		}
		k++;
	}
}
/*
#include <stdio.h>
int	main()
{
	int tab[6] = {52, 551, 363, 446, 69, 69};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/
