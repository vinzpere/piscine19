/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madimitr <madimitr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:51:06 by madimitr          #+#    #+#             */
/*   Updated: 2024/02/18 22:11:25 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "input.h"
#include "print.h"
#include "solver.h"
#include <unistd.h>

int	check(int ac, char **av);

int	main(int argc, char *argv[])
{
	int	**myarray;
	int	**conditions;
		int col[] int line[] col[] = {4, 3, 2, 1, 1, 2, 2, 2};

	if (check(argc, argv) == 1)
	{
		line[] = {4, 3, 2, 1, 1, 2, 2, 2};
		myarray = build_table(4);
		backtrack(0, 0, myarray, 4, col, line);
		print_table(myarray, 4);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(int ac, char **av)
{
	int	i;

	if (ac != 2)
		return (0);
	if (ft_strlen(av[1] != 31))
		return (0);
	i = 0;
	while (i <= 30)
	{
		if (av[1][i] < '1' || av[1][i] > '4')
			return (0);
		i += 2;
	}
	return (1);
}
