/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:02:29 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/24 16:50:21 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_move(t_pos *pos, t_list **s_a, t_list **s_b)
{
	if (pos->pos_a > 0 && pos->pos_b > 0)
	{
		rr_rule(s_a, s_b);
		pos->pos_a--;
		pos->pos_b--;
	}
	else if (pos->pos_a < 0 && pos->pos_b < 0)
	{
		rrr_rule(s_a, s_b);
		pos->pos_a++;
		pos->pos_b++;
	}
}

void	one_stack_move(t_pos *pos, t_list **s_a, t_list **s_b)
{
	if (pos->pos_a > 0 && pos->pos_b == 0)
	{
		ra_rule(s_a);
		pos->pos_a--;
	}
	else if (pos->pos_a < 0 && pos->pos_b == 0)
	{
		rra_rule(s_a);
		pos->pos_a++;
	}
	else if (pos->pos_a == 0 && pos->pos_b > 0)
	{
		rb_rule(s_b);
		pos->pos_b--;
	}
	else if (pos->pos_a == 0 && pos->pos_b < 0)
	{
		rrb_rule(s_b);
		pos->pos_b++;
	}
}

void	move_best(t_pos pos, t_list **stack_a, t_list **stack_b)
{
	while (pos.pos_a != 0 || pos.pos_b != 0)
	{
		if ((pos.pos_a > 0 && pos.pos_b > 0) || (pos.pos_a < 0 && pos.pos_b < 0))
			double_move(&pos, stack_a, stack_b);
		else if (pos.pos_a > 0 && pos.pos_b < 0)
		{
			ra_rule(stack_a);
			pos.pos_a--;
			rrb_rule(stack_b);
			pos.pos_b++;
		}
		else if (pos.pos_a < 0 && pos.pos_b > 0)
		{
			rra_rule(stack_a);
			pos.pos_a++;
			rb_rule(stack_b);
			pos.pos_b--;
		}
		else if (pos.pos_a == 0 || pos.pos_b == 0)
			one_stack_move(&pos, stack_a, stack_b);
	}
	pa_rule(stack_a, stack_b);
}
