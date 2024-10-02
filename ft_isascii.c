/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:24:33 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:24:35 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	
	n1 = -1;
	n2 = 83;
	n3 = 321;
	printf("%d\n", ft_isascii(n1));
	printf("%d\n", ft_isascii(n2));
	printf("%d\n", ft_isascii(n3));
}
*/
