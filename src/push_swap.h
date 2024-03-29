/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:25:18 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/25 00:34:14 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"

// ------- structs -------
typedef struct s_lis
{
	int	i;
	int	j;
	int	*lis;
	int	*s_sequence;
	int	*length;
}	t_lis;

typedef struct s_pos
{
	int	*arr_a;
	int	*arr_b;
	int	len_a;
	int	len_b;
	int	pos_a;
	int	pos_b;
	int	n_move;
}	t_pos;

// ------- rules functions ---------
void	sa_rule(t_list *stack);
void	sb_rule(t_list *stack);
void	ss_rule(t_list *stack_a, t_list *stack_b);
void	pa_rule(t_list **stack_a, t_list **stack_b);
void	pb_rule(t_list **stack_a, t_list **stack_b);
void	ra_rule(t_list **stack);
void	rb_rule(t_list **stack);
void	rr_rule(t_list **stack_a, t_list **stack_b);
void	rra_rule(t_list **stack);
void	rrb_rule(t_list **stack);
void	rrr_rule(t_list **stack_a, t_list **stack_b);
// -----------------------------------
void	sort_stack(t_list **stack_a, t_list **stack_b);
t_list	*fill_stacks(char **av);
int		checker(char **av);
int		sort_check(t_list *stack);
void	get_smallest(t_list **stack_a);
int		*stack_to_arr(t_list *list, int len);
// ------- algo functions ------------
void	lis_sorting(t_list **stack_a, t_list **stack_b);
void	move_to_a(t_list **stack_a, t_list **stack_b);
void	moves_count(t_pos **pos, int index, int i);
int		get_b_pos(int len_b, int index);
int		first_half(int a_pos, int b_pos);
int		last_half(int a_pos, int b_pos);
void	moves_count_last(t_pos **pos, int index, int j);
void	max(t_pos **pos, int index);
void	move_best(t_pos pos, t_list **stack_a, t_list **stack_b);
#endif
