/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rules.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:08:05 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/25 00:39:37 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rule(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	if ((!(*stack) || !(*stack)->next))
		return ;
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	ft_printf("ra\n");
}

void	rb_rule(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	if ((!(*stack) || !(*stack)->next))
		return ;
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	ft_printf("rb\n");
}

void	rr_rule(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;
	t_list	*tmp;

	if ((!(*stack_a) || !(*stack_a)->next)
		|| (!(*stack_b) || !(*stack_b)->next))
		return ;
	head = *stack_a;
	*stack_a = head->next;
	head->next = NULL;
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	head = *stack_b;
	*stack_b = head->next;
	head->next = NULL;
	tmp = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	ft_printf("rr\n");
}
