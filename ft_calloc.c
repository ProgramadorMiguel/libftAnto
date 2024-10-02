/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:24:40 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 18:24:43 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pun;

	pun = (void *)malloc(count * size);
	if (!pun)
		return (NULL);
	ft_bzero(pun, count * size);
	return (pun);
}
