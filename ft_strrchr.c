/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprieto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:49:58 by mprieto           #+#    #+#             */
/*   Updated: 2024/09/30 13:50:01 by mprieto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	char s1[] = "Anaconda";
	char s2[] = "Condenada";
	char s3[] = "";
	//printf("%s\n", ft_strrchr(s1, 'n'));
	//printf("%s\n", ft_strrchr(s2, 'n'));
	//printf("%s\n", ft_strrchr(s3, 'd'));
	//printf("%s\n", ft_strrchr(s1, 'b' + 255));
	printf("%s\n", ft_strrchr(NULL, '\0'));
	printf("%s\n", strrchr(NULL, '\0'));
	return (0);
}
*/
