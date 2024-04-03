/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:36:57 by vpere             #+#    #+#             */
/*   Updated: 2024/02/17 16:15:36 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d", ft_str_is_uppercase("COllOU"));
}
*/
