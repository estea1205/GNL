/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:04:54 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:23:52 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		while (str[i] == character)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main (void)
{
	int	tab[7] = {42,-42,0,1,-1,2,-2};
	printf("%s\n", ft_memchr(tab, 2, 7));
	printf("%s\n", memchr(tab, 2, 7));
	return (0);
}
*/
