/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_rules.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:07:57 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/25 00:32:07 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_rule(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (!(*stack_b))
		return ;
	head = *stack_b;
	*stack_b = head->next;
	ft_lstadd_front(stack_a, head);
	ft_printf("pa\n");
}

void	pb_rule(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (!(*stack_a))
		return ;
	head = *stack_a;
	*stack_a = head->next;
	ft_lstadd_front(stack_b, head);
	ft_printf("pb\n");
}
