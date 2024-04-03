/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:01:36 by vpere             #+#    #+#             */
/*   Updated: 2024/02/26 17:07:04 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	if (str[i] != 0)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc > j)
	{
		while (j <= argc - 1)
		{
			ft_print_params(argv[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
