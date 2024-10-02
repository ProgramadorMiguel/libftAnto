/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:24:58 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:25:00 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	
	n1 = '2';
	n2 = 'a';
	n3 = '?';
	printf("%d\n", ft_isdigit(n1));
	printf("%d\n", ft_isdigit(n2));
	printf("%d\n", ft_isdigit(n3));
	printf("%d\n", ft_isdigit(n1 +  1));
	printf("%d\n", ft_isdigit(n1 -  1));
	printf("%d\n", ft_isdigit(n2 -  1));
	printf("%d\n", ft_isdigit(n3 + 1));
}
*/
