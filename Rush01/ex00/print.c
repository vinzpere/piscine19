/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madimitr <madimitr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:46:30 by madimitr          #+#    #+#             */
/*   Updated: 2024/02/18 17:01:07 by madimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_array(int *array, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
}

void	print_table(int **table, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		print_int_array(table[i], size);
		if (i < size - 1)
			write(1, "\n", 1);
		i++;
	}
}
