/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 02:08:52 by aakhtab           #+#    #+#             */
/*   Updated: 2023/05/24 23:56:23 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_num(const char *arg)
{
    int i;

    i = 0;
    if (ft_strlen(arg) == 0)
        return (1);
    if ((arg[i] == '-' && arg[i + 1] != 0 ) 
        || (arg[i] == '+' && arg[i + 1] != 0))
        i++;
    while (arg[i])
    {
        if (ft_isdigit(arg[i]) != 1)
            return (1);
        i++;
    }
    return (0);
}

int is_dup(char **args, int len)
{
    int i;
    int j;
    int *nums;

    i = 0;
    nums = ft_calloc(len , sizeof(int));
    while(++i <= len)
        nums[i - 1] = ft_atoi(args[i]);    
    i = 0;
    while(i <= len)
    {
        j = i + 1;
        while (j < len)
        {
            //ft_printf("%d\n", nums[i]);
            if (nums[i] == nums[j++])
                return (j);
        }        
        i++;
    }
    return (0);
}

int is_int(char **av)
{
    int     i;
    long    num;
    
    i = 0;
    while (av[++i])
    {
        //ft_printf("here\n");
        num = ft_atoi(av[i]);
        if (num < -2147483648 || num > 2147483647)
            return (i);
    }
    return (0);
}

int checker(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[++i])
        if (is_num(av[i]) != 0)
            return (i);
    j = is_dup(av, (i - 1));
    if (j != 0)
        return (j);
    if (is_int(av) != 0)
        return (i);
    return (0);
}