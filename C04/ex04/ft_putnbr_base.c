/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:03:18 by vpere             #+#    #+#             */
/*   Updated: 2024/02/25 12:17:04 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	recursive(int nb, int baselen, char *base)
{
	char	symbol;

	if (nb >= baselen)
		recursive(nb / baselen, baselen, base);
	symbol = base[nb % baselen];
	write(1, &symbol, 1);
	base++;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int	i;

	baselen = 0;
	while (base[baselen] != '\0')
	{
		if (base[baselen] == '+' || base[baselen] == '-')
			return ;
		i = 0;
		while (i < baselen)
		{
			if (base[i] == base[baselen])
				return ;
			i++;
		}
		baselen++;
	}
	if (baselen < 2)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	recursive(nbr, baselen, base);
}
/*
int main()
{
	int	n = 8;
	char	base[] = "poneyviff";

	ft_putnbr_base(n, base);
}
*/
