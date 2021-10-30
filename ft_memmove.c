/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:02:27 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 10:45:00 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main (void)
{
    unsigned char dest[] = "world";
    unsigned char sour[] = "hello";

	printf("before1 selfmade:%s\n", dest);
    printf("before2 selfmade:%s\n", sour);
	printf("after selfmade:%s\n", ft_memmove(dest, sour, 3));
	printf("before1 target:%s\n", dest);
	printf("before2 target:%s\n", sour);
	printf("after target:%s\n", memmove(dest, sour, 2));
	return (0);
}
*/
