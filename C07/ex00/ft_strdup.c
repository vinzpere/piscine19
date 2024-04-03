/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:46:41 by vpere             #+#    #+#             */
/*   Updated: 2024/02/29 20:25:28 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(src));
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = 0;
	if (!ptr)
		return (NULL);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_strdup("OHFRERO"));
	return (0);
}
*/
