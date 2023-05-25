/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:24:07 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/25 01:34:26 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *fill_stacks(char **av)
{
    t_list  *tmp;
    int     i;

    i = 0;
    tmp = NULL;
    while (av[++i])
        ft_lstadd_back(&tmp , ft_lstnew(ft_atoi(av[i])));
    return (tmp);
}