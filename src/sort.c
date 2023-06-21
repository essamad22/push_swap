/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 04:55:45 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/21 15:44:10 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    two_num(t_list *stack)
{
    if (stack->content > stack->next->content)
        return (sa_rule(stack));
}

void    three_num(t_list **stack)
{
    if ((*stack)->content > (*stack)->next->content 
        && (*stack)->content > (*stack)->next->next->content)
        ra_rule(stack);
    if ((*stack)->content < (*stack)->next->content 
        && (*stack)->content > (*stack)->next->next->content)
        rra_rule(stack);
    if ((*stack)->next->content > (*stack)->content 
        && (*stack)->next->content > (*stack)->next->next->content)
        rra_rule(stack);
    if ((*stack)->content > (*stack)->next->content 
        && (*stack)->content < (*stack)->next->next->content)
        sa_rule(*stack);
}

void    four_num(t_list **stack_a, t_list **stack_b)
{
    get_smallest(stack_a);
    pb_rule(stack_a, stack_b);
    three_num(stack_a);
    pa_rule(stack_a, stack_b);
}

void    five_num(t_list **stack_a, t_list **stack_b)
{
    get_smallest(stack_a);
    pb_rule(stack_a, stack_b);
    get_smallest(stack_a);
    pb_rule(stack_a, stack_b);
    three_num(stack_a);
    pa_rule(stack_a, stack_b);
    pa_rule(stack_a, stack_b);
}

void    sort_stack(t_list **stack_a, t_list **stack_b)
{
    int len;

    len = ft_lstsize(*stack_a);
    if (len == 2)
        return (two_num(*stack_a));
    if (len == 3)
        return (three_num(stack_a));
    if (len == 4)
        return (four_num(stack_a, stack_b));
    if (len == 5)
        return (five_num(stack_a, stack_b));
    if (len > 5)
		lis_sorting(stack_a, stack_b);
}
