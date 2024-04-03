/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:12:57 by vpere             #+#    #+#             */
/*   Updated: 2024/02/25 12:11:11 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	pair;
	int	number;
	int	rot;

	i = 0;
	pair = 0;
	number = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pair++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		rot = str[i] - 48;
		number = number * 10 + rot;
		i++;
	}
	if (!(pair % 2))
		return (number);
	return (-number);
}
/*
#include <stdio.h>
int main()
{
	char	str[] = "   ---+--+123444554ab567";
	printf("%d\n", ft_atoi(str));
}
*/
