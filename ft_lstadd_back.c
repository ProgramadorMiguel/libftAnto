/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:30:26 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:30:28 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*otra;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	otra = ft_lstlast(*lst);
	otra->next = new;
}
