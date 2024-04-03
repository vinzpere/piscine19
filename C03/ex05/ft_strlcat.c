/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:58:36 by vpere             #+#    #+#             */
/*   Updated: 2024/02/22 22:53:57 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	j = 0;
	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (srcl == 0 || size == 0)
		return (destl);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (srcl < size)
		return (destl + srcl);
	else 
		return (destl + size);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[50] = "Hellot";
	char str2[15] = "wassup";
	char str3[15] = "Hellot";
	char str4[15] = "wassup";
	int i = strlcat(str3, str4, 0);
	
	printf("%u\n", ft_strlcat(str1, str2, 0));
	printf("%u", i);
}
