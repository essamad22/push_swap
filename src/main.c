/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:24:45 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/29 13:23:43 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		check;

	if (ac < 2)
		return (1);
	check = checker(av);
	if (check != 0)
		return (ft_printf("(ERROR): %s\n", av[check]));
	stack_a = fill_stacks(av);
	stack_b = NULL;
	check = sort_check(stack_a);
	if (check != 0)
		sort_stack(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
