/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:19:55 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/20 22:41:43 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	*stack_to_arr(t_list *list, int len)
{
	int	i;
	t_lis lis;

	lis.arr = ft_calloc(len, sizeof(int));
	i = -1;
	while (++i < len)
	{
		lis.arr[i] = list->content;
		list = list->next;
	}
	return (lis.arr);
}

int	*get_lis(int *arr, t_lis lis, int stack_len, int *len)
{
	int num;
	int i;

	lis.i = 0;
	num = lis.length[lis.i];
	while (++lis.i < stack_len)
	{
		if (num < lis.length[lis.i])
		{
			num = lis.length[lis.i];
			i = lis.i;
		}
	}
	*len = num;
	lis.lis = ft_calloc(num, sizeof(int));
	while (--num >= 0)
	{
		lis.lis[num] = arr[i];
		i = lis.s_sequence[i];
	}
	return (lis.lis);
}
int	*ft_lis(int *arr, int stack_len, int *lis_len)
{
	t_lis lis;

	lis.length = ft_calloc(stack_len, sizeof(int));
	lis.s_sequence = ft_calloc(stack_len, sizeof(int));
	lis.i = -1;
	while (++lis.i < stack_len)
		lis.length[lis.i] = 1;
	lis.i = 0;
	while (++lis.i < stack_len)
	{
		lis.j = -1;
		while (++lis.j < lis.i)
		{
			if (arr[lis.j] < arr[lis.i] 
					&& lis.length[lis.i] <= lis.length[lis.j] + 1)
			{
				lis.length[lis.i] = lis.length[lis.j] + 1;
				lis.s_sequence[lis.i] = lis.j;
			}
		}
	}
	lis.lis = get_lis(arr, lis, stack_len, lis_len);
	lis.i = -1;
	while (++lis.i < stack_len)
		ft_printf("[%d]", arr[lis.i]);
	ft_printf("\n");
	lis.i = -1;
	while (++lis.i < stack_len)
		ft_printf("[%d]", lis.length[lis.i]);
	lis.i = -1;
	ft_printf("\n");
	while (++lis.i < *lis_len)
		ft_printf("[%d]", lis.lis[lis.i]);
	free(lis.length);
	free(lis.s_sequence);
	free(lis.arr);
	return (lis.lis);
}

void	lis_sorting(t_list *stack_a, t_list *stack_b)
{
	int	*arr;
	int *lis;
	int	len;
	int	stack_len;
	
	stack_len = ft_lstsize(stack_a);
	arr = stack_to_arr(stack_a, stack_len);
	lis = ft_lis(arr, stack_len, &len);
	(void)stack_b;
}
