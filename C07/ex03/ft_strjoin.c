/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:27:42 by vpere             #+#    #+#             */
/*   Updated: 2024/02/29 23:41:35 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlent(char **str, int size, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l = l + ft_strlen(str[i]);
		i++;
	}
	l = l + ((size - 1) * ft_strlen(sep)) + 1;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char) + 1);
		*str = 0;
		return (str);
	}
	str = malloc(ft_strlent(strs, size, sep) * sizeof (char));
	str[0] = 0;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
    int size = 6;
    char  sep[] = ", ";
    char  *strs[] = {"salut", "mon", "reuf", "que", "se", "se"};

    printf("%s", ft_strjoin(size, strs, sep));
}
*/
