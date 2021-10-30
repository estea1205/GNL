/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:06:30 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:16:16 by eteh             ###   ########.fr       */
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

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	 size_t	src_len;
	 size_t	i;

	 src_len = ft_strlen(src);
	 i = 0;
	 if (dstsize < 0)
		 return (src_len);
	 while (src[i] != '\0' && i < (dstsize - 1))
		 {
		dst[i] = src[i];
		i++;
		 }
	 dst[i] = '\0';
	 return (src_len);
}
/*
int	main (void)
{
	char a[] = "Hello";
	char b[] = "momo";

	printf("selfmade:%zu\n",ft_strlcpy(a,b,0));
	printf("target:%lu\n",strlcpy(a,b,0));
	return (0);
}
*/
