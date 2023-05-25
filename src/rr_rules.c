/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:29:43 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/25 04:12:42 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra_rule(t_list **stack)
{
    t_list  *head;
    t_list  *tmp;

    if (!(*stack) || !(*stack)->next)
        return ;
    tmp = *stack;
    while (tmp->next->next)
        tmp = tmp->next;
    head = tmp->next;
    tmp->next = NULL;
    head->next = *stack;
    *stack = head;
    ft_printf("rra\n");
}

void    rrb_rule(t_list **stack)
{
    t_list  *head;
    t_list  *tmp;

    if (!(*stack) || !(*stack)->next)
        return ;
    tmp = *stack;
    while (tmp->next->next)
        tmp = tmp->next;
    head = tmp->next;
    tmp->next = NULL;
    head->next = *stack;
    *stack = head;
    ft_printf("rrb\n");
}

void    rrr_rule(t_list **stack_a, t_list **stack_b)
{
    t_list  *head;
    t_list  *tmp;

    if (((!(*stack_a) || !(*stack_a)->next)) 
        || (!(*stack_b) || !(*stack_b)->next))
        return ;
    // reverse rotate stack_a
    tmp = *stack_a;
    while (tmp->next->next)
        tmp = tmp->next;
    head = tmp->next;
    tmp->next = NULL;
    head->next = *stack_a;
    *stack_a = head;
    // reverse rotate stack_b
    tmp = *stack_b;
    while (tmp->next->next)
        tmp = tmp->next;
    head = tmp->next;
    tmp->next = NULL;
    head->next = *stack_b;
    *stack_b = head;
    ft_printf("rrr\n");
}