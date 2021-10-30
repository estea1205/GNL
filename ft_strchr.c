/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:04:44 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:19:29 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return ((char *)0);
}
/*
int	main (void)
{
	char a[] = "Hello";

	printf("selfmade:%s\n", ft_strchr(a,'l'));
	printf("target:%s\n", strchr(a,'l'));
	return (0);
}
*/
