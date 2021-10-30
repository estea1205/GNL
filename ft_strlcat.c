/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:05:39 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:19:03 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (dstsize < i)
	{
		while (src[j])
			j++;
		return (dstsize + j);
	}
	if (dstsize > 0 && i < dstsize - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
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
