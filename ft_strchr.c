/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:42:11 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:42:13 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*
int main(void)
{
	//char s[] = "the cake is a lie !\0I'm hidden lol\r\n";
	//char s[] = "";
	//printf("%s\n", strchr(s, 't' + 256));
	//printf("%s\n", ft_strchr(s, 't' + 256));
	//printf("%s\n", strchr(NULL, 'l'));
	//printf("%s\n", ft_strchr(NULL, 'l'));
	//printf("%s\n", strchr("the cake is a lie !\0I'm hidden lol\r\n", 'l'));
	//printf("%s\n", ft_strchr("the cake is a lie !\0I'm hidden lol\r\n", 'l'));
	//printf("%s\n", strchr(((void *)0), '\0'));
	printf("%s\n", ft_strchr(((void *)0), '\0'));
	return (0);
}
*/
