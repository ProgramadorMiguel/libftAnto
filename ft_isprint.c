/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:27:34 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:27:40 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	
	n1 = -1;
	n2 = 32;
	n3 = 321;
	printf("%d\n", ft_isprint(n1));
	printf("%d\n", ft_isprint(n2));
	printf("%d\n", ft_isprint(n3));
}
*/
