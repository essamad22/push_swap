/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 02:49:10 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/29 03:23:04 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int num_index(t_list *stack, int n)
{
    int i;
    t_list  *lst;

    i = 0;
    lst = stack;
    while (lst)
    {
        if (lst->content == n)
            return (i);
        i++;
        lst = lst->next;
    }
    return (i);
}

void    get_smallest(t_list **stack_a)
{
    int num;
    int i;
    t_list *tmp;

    tmp = *stack_a;
    num = tmp->content;
    while (tmp)
    {
        if (num > tmp->content)
            num = tmp->content;
        tmp = tmp->next;
    }
    i = num_index(*stack_a, num);
    num = ft_lstsize(*stack_a) / 2;
    if (i == 0)
        return ;
    if (i < num)
    {
        num = i;
        while (num--)
            ra_rule(stack_a);
    }
    else
    {
        num = ft_lstsize(*stack_a) - i;
        while (num--)
            rra_rule(stack_a);
    }
}