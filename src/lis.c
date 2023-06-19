/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:19:55 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/18 23:18:44 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_arr(t_list *list, int len)
{
	int	i;
	int	*arr;

	arr = ft_calloc(len, sizeof(int));
	i = -1;
	while (++i < len)
	{
		arr[i] = list->content;
		list = list->next;
	}
	return (arr);
}

void	lis_sorting(t_list *stack_a, t_list *stack_b)
{
	int	*arr;
	//int *lis;
	int	len;
	int	stack_len;
	
	stack_len = ft_lstsize(stack_a);
	arr = stack_to_arr(stack_a, stack_len);
	len = -1;
	while (++len < stack_len)
		ft_printf("%d\n", arr[len]);
	(void)stack_b;
}
