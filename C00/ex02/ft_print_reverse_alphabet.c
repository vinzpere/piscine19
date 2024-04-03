/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:12:26 by vpere             #+#    #+#             */
/*   Updated: 2024/02/11 21:31:16 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralphabet;

	ralphabet = 'z';
	while (ralphabet >= 'a')
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
