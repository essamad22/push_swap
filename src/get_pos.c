/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:39:35 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/23 22:24:32 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	//int moves;

	if (index == 0)
	{
		(**pos).pos_a = i;
		(**pos).pos_b = index;
		(**pos).n_move = i;
		return ;
	}
	b_pos = get_b_pos((**pos).len_b, index);
}
