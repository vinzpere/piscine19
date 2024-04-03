/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madimitr <madimitr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:59:22 by madimitr          #+#    #+#             */
/*   Updated: 2024/02/18 18:01:24 by madimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef solver
# define solver
int		is_valid(int n, int row, int col, int **table, int size,
			int **conditions);
int		backtrack(int row, int col, int **table, int size, int *colcond,
			int *linecond);
int		**build_table(int size);
void	fill_table(int **table, int size, int *col, int *line);
#endif
