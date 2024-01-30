/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhtab <aakhtab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:47:01 by aakhtab           #+#    #+#             */
/*   Updated: 2023/06/25 01:10:38 by aakhtab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*ptr;
	t_list	*save;

	if (!(*lst))
		return ;
	ptr = *lst;
	while (ptr)
	{
		save = ptr->next;
		ft_lstdelone(ptr);
		ptr = save;
	}
	*lst = NULL;
}
