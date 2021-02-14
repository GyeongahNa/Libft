/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:13:00 by gna               #+#    #+#             */
/*   Updated: 2020/04/07 20:13:09 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *list;

	if (lst == 0 || del == 0)
		return ;
	list = *lst;
	while (list)
	{
		del(list->content);
		temp = list->next;
		free(list);
		list = temp;
	}
	*lst = NULL;
}
