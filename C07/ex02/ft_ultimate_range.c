/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:50:06 by vpere             #+#    #+#             */
/*   Updated: 2024/02/29 21:28:54 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	if (!*range)
		return (-1);
	return (max - min);
}
/*
#include <stdio.h>
int main()
{
	int *range;

	printf("%d", ft_ultimate_range(&range, 0, 1));
}
*/
