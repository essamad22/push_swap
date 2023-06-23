/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:47:10 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/23 19:02:30 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_pos(t_pos *pos, int index)
{
	int	i;
	int	j;

	i = -1;
	j = pos->len_a / 2;
	if ((pos->arr_a[0] > pos->arr_b[index]
			&& pos->arr_a[pos->len_a - 1] < pos->arr_b[index]))
	{
		//if (ft_moves_top(&pos, index) == 1)
		//	return ;
	}
	while (++i <= j)
	{
		if (pos->arr_a[i] < pos->arr_b[index]
			&& pos->arr_a[i + 1] > pos->arr_b[index])
		//	return (mov_count_fir(&pos, index, i + 1));
	}
	while (++j < pos->len_a - 1)
	{
		if (pos->arr_a[j] < pos->arr_b[index]
			&& pos->arr_a[j + 1] > pos->arr_b[index])
		//	return (mov_count_last(&pos, index, ++j));
	}
}

t_pos	best_move(t_list **stack_a, t_list **stack_b)
{
	t_pos	pos;
	int		i;

	i = -1;
	pos.len_a = ft_lstsize(*stack_a);
	pos.len_b = ft_lstsize(*stack_b);
	pos.arr_a = stack_to_arr(*stack_a, pos.len_a);
	pos.arr_b = stack_to_arr(*stack_b, pos.len_b);
	while (++i < pos.len_b)
		get_pos(&pos, i);
}

void	move_to_a(t_list **stack_a, t_list **stack_b)
{
	t_pos	best;

	while ((ft_lstsize(*stack_b))!= 0)
	{
		best = best_move(stack_a, stack_b);
	}
}
