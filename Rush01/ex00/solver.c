/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madimitr <madimitr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:37:28 by madimitr          #+#    #+#             */
/*   Updated: 2024/02/18 18:23:55 by madimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int	test_is_valid(int x, int y, int* col, int* line, int n, int size)
{
	printf("testing %d, x = %d, y = %d, col = %d, line = %d\n",n,x,y,col[x],
		line[y]);
	if ((col[x] - 1 <= y) && (n - 1 >= y))
	{
		if ((col[x + size] - 1 <= size - y) && (n - 1 >= y))
		{
			if ((line[y] - 1 <= x) && (n - 1 >= x))
			{
				if ((line[y + size] - 1 <= size - x) && (n - 1 >= x))
				{
					return(1);
				}
			}
		}
	}
	return (0);
}
*/
int	is_valid(int n, int row, int col, int **table, int size, int *colcond,
		int *linecond)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (table[row][i] == n || table[i][col] == n)
			return (0);
		i++;
	}
	// if (test_is_valid(row, col, colcond, linecond, n, size))
	//	{
	//		return (1);
	//	}
	return (1);
}

int	backtrack(int row, int col, int **table, int size, int *colcond,
		int *linecond)
{
	int	i;

	i = 1;
	if (row == size)
		return (1);
	if (col == size)
		return (backtrack(row + 1, 0, table, size, colcond, linecond));
	while (i <= size)
	{
		if (is_valid(i, row, col, table, size, colcond, linecond))
			table[row][col] = i;
		if (table[row][col] != 0)
		{
			if (backtrack(row, col + 1, table, size, colcond, linecond))
				return (1);
		}
		table[row][col] = 0;
		i++;
	}
	return (0);
}

void	fill_table(int **table, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			table[i][j] = 0;
			j++;
		}
		i++;
	}
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
	fill_table(table, size);
	return (table);
}
