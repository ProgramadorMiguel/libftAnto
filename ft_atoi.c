/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:21:31 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:21:37 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * neg);
}

/*
int main(void)
{
	char *n1 = "15545";
	printf("%d\n",ft_atoi((n1)));
	char *n2 = "15-545";
	printf("%d\n",ft_atoi((n2)));
	char *n3 = "1vv5-545";
	printf("%d\n",ft_atoi((n3)));
	char *n4 = "&hghj1vv5-545";
	printf("%d\n",ft_atoi((n4)));
	return (0);
}
*/
