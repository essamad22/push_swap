/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:19:55 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/29 13:21:26 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_lis(int n, int *lis, int len)
{
	int	i;

	i = -1;
	while (++i < len)
		if (n == lis[i])
			return (1);
	return (0);
}

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

int	*get_lis(int *arr, t_lis lis, int stack_len, int *len)
{
	int	num;
	int	i;

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
	t_lis	lis;

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
	free(lis.length);
	free(lis.s_sequence);
	return (lis.lis);
}

void	lis_sorting(t_list **stack_a, t_list **stack_b)
{
	int	*arr;
	int	*lis;
	int	len;
	int	stack_len;

	stack_len = ft_lstsize(*stack_a);
	arr = stack_to_arr(*stack_a, stack_len);
	lis = ft_lis(arr, stack_len, &len);
	while (len < stack_len)
	{
		if (not_lis((*stack_a)->content, lis, len) == 0)
		{
			pb_rule(stack_a, stack_b);
			stack_len--;
		}
		else
			ra_rule(stack_a);
	}
	free(arr);
	free(lis);
	move_to_a(stack_a, stack_b);
}
