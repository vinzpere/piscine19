/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:36:57 by vpere             #+#    #+#             */
/*   Updated: 2024/02/17 16:27:29 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (31 < str[i] && str[i] < 127)
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
	printf("%d", ft_str_is_printable("COllOU"));
}
*/
