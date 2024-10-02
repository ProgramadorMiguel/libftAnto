/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:35:25 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:35:27 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pun1;
	unsigned char	*pun2;

	if (n == 0)
		return (0);
	pun1 = (unsigned char *)s1;
	pun2 = (unsigned char *)s2;
	i = 0;
	while (*pun1 == *pun2 && ++i < n)
	{
		pun1++;
		pun2++;
	}
	return ((int)(*pun1 - *pun2));
}
