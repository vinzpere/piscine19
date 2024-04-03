/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madimitr <madimitr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:27:06 by madimitr          #+#    #+#             */
/*   Updated: 2024/02/18 15:43:45 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	test_is_valid(int x, int y, int *col, int *line, int n, int size)
{
	if ((col[x] - 1 <= x) && (n - 1 >= x))
		return (1);
	else if ((col[x] - 1 <= x) && (n - 1 >= x))
		return (1);
	else if ((col[x] - 1 <= x) && (n - 1 >= x))
		return (1);
	else if ((col[x] - 1 <= x) && (n - 1 >= x))
		return (1);
	return (0);
}

int	**build_table(int size)
{
	int	i;
	int	**table;
	int	*line;

	i = 0;
	table = (int **)malloc(sizeof(int *) * size);
	if (!table)
		return (NULL);
	while (i < size)
	{
		line = (int *)malloc(sizeof(int) * size);
		if (!line)
			return (NULL);
		table[i] = line;
		i++;
	}
	return (table);
}
