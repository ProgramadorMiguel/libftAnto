/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:59 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:35:01 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pun;

	i = 0;
	pun = (unsigned char *)s;
	while (++i <= n)
		if (*(pun++) == (unsigned char)c)
			return ((void *)--pun);
	return (0);
}
