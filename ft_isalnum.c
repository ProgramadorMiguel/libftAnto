/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:23:09 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:23:12 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) != 0)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c1;
	char	c2;
	char	c3;
	
	c1 = 'Z';
	c2 = '3';
	c3 = '?';
	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	printf("%d\n", ft_isalnum(c3));
	printf("%d\n", ft_isalnum(c1 +  1));
	printf("%d\n", ft_isalnum(c2 -  1));
	printf("%d\n", ft_isalnum(c3 + 1));
}
*/
