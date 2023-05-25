/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rules.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:08:13 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/25 04:12:07 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa_rule(t_list *stack)
{
    int tmp;

    if (!stack || !stack->next)
        return ;
    tmp = stack->next->content;
    stack->next->content = stack->content;
    stack->content = tmp;
    ft_printf("sa\n");
}

void    sb_rule(t_list *stack)
{
    int tmp;
    
    if (!stack || !stack->next)
        return ;
    tmp = stack->next->content;
    stack->next->content = stack->content;
    stack->content = tmp;
    ft_printf("sb\n");
}

void    ss_rule(t_list *stack_a, t_list *stack_b)
{
    int tmp_a;
    int tmp_b;

    if ((!stack_a || !stack_a->next) || (!stack_b || !stack_b->next))
        return ;
    // swap stack a
    tmp_a = stack_a->next->content;
    stack_a->next->content = stack_a->content;
    stack_a->content = tmp_a;
    // swap stack b
    tmp_b = stack_b->next->content;
    stack_b->next->content = stack_b->content;
    stack_b->content = tmp_b;
    ft_printf("ss\n");
}