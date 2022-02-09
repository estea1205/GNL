/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:01:50 by eteh              #+#    #+#             */
/*   Updated: 2022/02/09 14:33:36 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
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
	printf("after selfmade:%s\n", ft_memcpy(dest, sour, 3));
	printf("before1 target:%s\n", dest);
	printf("before2 target:%s\n", sour);
	printf("after target:%s\n", memcpy(dest, sour, 2));
	return (0);
}
*/
