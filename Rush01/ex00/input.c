/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input-tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:45:32 by vpere             #+#    #+#             */
/*   Updated: 2024/02/18 22:05:30 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	chartoint(int num)
{
	num = num - '0';
	return (num);
}

int	*input_tab(char *str)
{
	int	i;
	int	j;
	int	*condition;

	condition = (int *)malloc(sizeof(int) * 16);
	i = 1;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			condition[j] = chartoint(str[i]);
			j++;
		}
		i++;
	}
	return (condition);
}
