/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:05:55 by vpere             #+#    #+#             */
/*   Updated: 2024/02/11 20:26:39 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nbr >= 0 && nbr < 10)
			ft_putchar(nbr + '0');
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr(nbr * (-1));
		}
		else
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
	}
}
/*
int	main()
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
