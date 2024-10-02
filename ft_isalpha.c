/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:23:45 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:23:48 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

/*
int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	
	n1 = 'Z';
	n2 = 'a';
	n3 = '?';
	printf("%d\n", ft_isalpha(n1));
	printf("%d\n", ft_isalpha(n2));
	printf("%d\n", ft_isalpha(n3));
	printf("%d\n", ft_isalpha(n1 +  1));
	printf("%d\n", ft_isalpha(n2 -  1));
	printf("%d\n", ft_isalpha(n3 + 1));
}
*/
