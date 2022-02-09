/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:05:39 by eteh              #+#    #+#             */
/*   Updated: 2022/02/09 20:06:27 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	while (src[i] != '\0' && (d_len + i) < (dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = 0;
	if (d_len < dstsize)
		return (d_len + s_len);
	return (dstsize + s_len);
}
/*
int	main (void)
{
	char a[] = "Hello";
	char b[] = "Momo";

	printf("selfmade:%zu\n", ft_strlcat(a,b,4));
	printf("target:%lu\n", strlcat(a,b,4));
	return(0);
}
*/
