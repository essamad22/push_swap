/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:21:03 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/24 15:58:34 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_big(int *arr, int len)
{
    int i;
    int num;
    int index;

    i = 0;
    index = i + 1;
    num = arr[i];
    while (++i < len)
    {
        if  (num < arr[i])
        {
            num = arr[i];
            index = i + 1;
        }
    }
    if (index > len / 2)
        return (index - len);
    else
        return (index);
}

int ft_moves(int a_pos, int b_pos)
{
    if (a_pos > 0)
        return (first_half(a_pos, b_pos));
    else
        return (last_half(a_pos, b_pos));
}
void    max(t_pos **pos, int index)
{
    int a_pos;
    int b_pos;
    int moves;
    
    a_pos = get_big((**pos).arr_a, (**pos).len_a);
    b_pos = get_b_pos((**pos).len_b, index);
    moves = ft_moves(a_pos, b_pos);
    if (index == 0)
	{
		(**pos).pos_a = a_pos;
		(**pos).pos_b = 0;
		(**pos).n_move = moves;
		return ;
	}
	if (moves < (**pos).n_move)
	{
		(**pos).pos_a = a_pos;
		(**pos).pos_b = b_pos;
		(**pos).n_move = moves;
	}
}
