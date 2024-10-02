/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:31:53 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:31:56 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*otra;

	if (!*lst)
		return ;
	while (*lst)
	{
		otra = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = otra;
	}
	*lst = 0;
}
