/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:37:46 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:37:49 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	val;
	size_t			i;

	str = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = val;
		i++;
	}
	return (b);
}
