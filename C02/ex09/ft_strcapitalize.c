/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:36:35 by vpere             #+#    #+#             */
/*   Updated: 2024/02/17 16:39:44 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] > 64 && str[p] < 91)
		{
			str[p] += 32;
		}
		p++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str [i] > 96 && str [i] < 123) 
			&& ((str[i - 1] < 48) 
				|| (str[i - 1] > 57 && str[i - 1] < 65) 
				|| (str[i - 1] > 90 && str[i - 1] < 97) 
				|| (str[i - 1] > 122)))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char string[] = "salut la tchime !test     19test ;fonction capitalize; \n";
	printf("%s", ft_strcapitalize(string));
}
*/
