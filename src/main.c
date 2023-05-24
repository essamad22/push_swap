/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:24:45 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/24 19:25:44 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    while (stack_a)
    {
        ft_printf("%d ", stack_a->content);
        stack_a = stack_a->next;
    }
    (void)stack_b;
    return 0; 
}