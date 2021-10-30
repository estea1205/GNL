/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:09:33 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:04:59 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	copy;

	copy = 0;
	while (*s != '\0')
	{
		copy++;
		s++;
	}
	return (copy);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main (void)
{
	char a[] = "Hello";
	
	printf("selfmade:%s\n", ft_strrchr(a,'e'));
	printf("target:%s\n", strrchr(a,'e'));
	return (0);
}
*/
