/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:39:35 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/29 13:16:52 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves_count_last(t_pos **pos, int index, int j)
{
	int	a_pos;
	int	b_pos;
	int	moves;

	a_pos = j - (**pos).len_a;
	b_pos = get_b_pos((**pos).len_b, index);
	moves = last_half(a_pos, b_pos);
	if (index == 0)
	{
		(**pos).pos_a = a_pos;
		(**pos).pos_b = b_pos;
		(**pos).n_move = moves;
	}
	if (moves < (**pos).n_move)
	{
		(**pos).pos_a = a_pos;
		(**pos).pos_b = b_pos;
		(**pos).n_move = moves;
	}
}

int	last_half(int a_pos, int b_pos)
{
	if (a_pos <= 0 && b_pos <= 0)
	{
		if (a_pos < b_pos)
			return (a_pos * (-1));
		else
			return (b_pos * (-1));
	}
	else
		return ((a_pos * (-1)) * b_pos);
}

int	first_half(int a_pos, int b_pos)
{
	if (a_pos >= 0 && b_pos >= 0)
	{
		if (a_pos > b_pos)
			return (a_pos);
		else
			return (b_pos);
	}
	else
		return (a_pos + (b_pos * (-1)));
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
	int	moves;

	if (index == 0)
	{
		(**pos).pos_a = i;
		(**pos).pos_b = index;
		(**pos).n_move = i;
		return ;
	}
	b_pos = get_b_pos((**pos).len_b, index);
	moves = first_half(i, b_pos);
	if (moves < (**pos).n_move)
	{
		(**pos).pos_a = i;
		(**pos).pos_b = b_pos;
		(**pos).n_move = moves;
	}
}
