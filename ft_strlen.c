/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:07:57 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:08:17 by eteh             ###   ########.fr       */
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
/*
int	main(void)
{
	char a[] = "Hello World";

	printf("selfmade:%zu\n", ft_strlen(a));
	printf("target:%lu\n", strlen(a));
	return (0);
}
*/
