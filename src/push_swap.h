/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:25:18 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/18 23:09:40 by aakhtab          ###   ########.fr       */
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
	int *s_sequence;
	int *length;
}	t_lis;

// ------- rules functions ---------
void    sa_rule(t_list *stack);
void    sb_rule(t_list *stack);
void    ss_rule(t_list *stack_a, t_list *stack_b);
void    pa_rule(t_list **stack_a, t_list **stack_b);
void    pb_rule(t_list **stack_a, t_list **stack_b);
void    ra_rule(t_list **stack);
void    rb_rule(t_list **stack);
void    rr_rule(t_list **stack_a, t_list **stack_b);
void    rra_rule(t_list **stack);
void    rrb_rule(t_list **stack);
void    rrr_rule(t_list **stack_a, t_list **stack_b);
// -----------------------------------
void    sort_stack(t_list **stack_a, t_list **stack_b);
t_list  *fill_stacks(char **av);
int     checker(char **av);
int     sort_check(t_list *stack);
void    get_smallest(t_list **stack_a);
// ------- algo functions ------------
void	lis_sorting(t_list *stack_a, t_list *stack_b);
#endif
