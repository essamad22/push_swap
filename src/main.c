/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:24:45 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/20 22:43:13 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int main(int ac, char *av[])
{
    t_list  *stack_a;
    t_list  *stack_b;
    int     check;

    if (ac < 2)
        return (write(1, "no arguments\n", 14));
    check = checker(av);
    if (check != 0)
        return (ft_printf("(ERROR): %s\n", av[check]));
    stack_a = fill_stacks(av);
    stack_b = NULL;
    check = sort_check(stack_a);
    if (check != 0)
        sort_stack(&stack_a, &stack_b);
   // while (stack_a)
	//{
    //    ft_printf("|%d| ", stack_a->content);
    //    stack_a = stack_a->next;
    //}
    // ft_printf("\n");
    // while (stack_b)
    // {
    //     ft_printf("|%d| ", stack_b->content);
    //     stack_b = stack_b->next;
    // }
	free(stack_a);
	free(stack_b);
	while (1)
		;
    return 0;
}
