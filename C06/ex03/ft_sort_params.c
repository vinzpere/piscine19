/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:02:26 by vpere             #+#    #+#             */
/*   Updated: 2024/02/26 17:09:41 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap(char *tab[], int k, int l)
{
	char	*temp;

	temp = tab[k];
	tab[k] = tab[l];
	tab[l] = temp;
}

void	ft_sort(char *argv[], int size)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
				min = j;
			j++;
		}
		if (ft_strcmp(argv[i], argv[min]) >= 0)
			ft_swap(argv, i, min);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	if (argc > 1)
	{
		ft_sort(argv, argc);
		while (i < argc)
		{
			k = -1;
			while (argv[i][++k] != '\0')
				write(1, &argv[i][k], 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
