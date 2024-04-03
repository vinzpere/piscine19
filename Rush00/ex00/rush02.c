/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpere <vpere@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:20:35 by vpere             #+#    #+#             */
/*   Updated: 2024/02/10 17:26:02 by vpere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
typedef struct s_config{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;
}	t_config;

struct s_config
{
	char	tab_c[9];
	int		x;
	int		y;
}	t_config;
*/
void	ft_putchar(char c);

void	ft_display(int n, char c, int r)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	if (r == 1)
		ft_putchar('\n');
}

void	ft_top_lane(int x, char *tab_c)
{
	int	i;

	i = 1;
	if (x == 1)
	{
		ft_display(1, tab_c[0], 1);
	}
	else
	{
		ft_display(1, tab_c[0], 0);
		while (x - 1 > i)
		{
			ft_display(1, tab_c[1], 0);
			i++;
		}
		ft_display(1, tab_c[2], 1);
	}
}

void	ft_mid_lane(int x, int y, char *tab_c)
{
	int	i;

	i = 0;
	if (y > 1)
	{
		while (i < y - 2)
		{
			ft_display(1, tab_c[3], 0);
			ft_display(x - 2, tab_c[4], 0);
			ft_display(1, tab_c[5], 1);
			i++;
		}
	}
}

void	ft_bot_lane(int x, int y, char *tab_c)
{
	int	i;

	i = 1;
	if (y > 1)
	{
		if (x == 1)
		{
			ft_display(1, tab_c[6], 1);
		}
		else
		{
			ft_display(1, tab_c[6], 0);
			while (x - 1 > i)
			{
				ft_display(1, tab_c[7], 0);
				i++;
			}
			ft_display(1, tab_c[8], 1);
		}
	}
}

void	rush(int x, int y)
{
	char	tab_c[9];

	tab_c[0] = 'A';
	tab_c[1] = 'B';
	tab_c[2] = 'A';
	tab_c[3] = 'B';
	tab_c[4] = ' ';
	tab_c[5] = 'B';
	tab_c[6] = 'C';
	tab_c[7] = 'B';
	tab_c[8] = 'C';
	if (x > 0 && y > 0)
	{
		ft_top_lane(x, tab_c);
		ft_mid_lane(x, y, tab_c);
		ft_bot_lane(x, y, tab_c);
	}
	else
	{
		write(1, "X and Y can't be negative !\n", 28);
	}
}
