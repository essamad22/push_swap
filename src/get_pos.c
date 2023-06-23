/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:39:35 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/24 00:11:30 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first_half(int a_pos, int b_pos)
{
	if (a >= 0 && b >= 0)
	{
		
}
int	get_b_pos(int len_b, int index)
{
	if (index <= (len_b / 2))
		return (index);
	else
		return (index - len_b);
}

void	moves_count(t_pos **pos, int index, int i)
{
	int	b_pos;
	int moves;

	if (index == 0)
	{
		(**pos).pos_a = i;
		(**pos).pos_b = index;
		(**pos).n_move = i;
		return ;
	}
	b_pos = get_b_pos((**pos).len_b, index);
	moves = first_half(i, index);
}
