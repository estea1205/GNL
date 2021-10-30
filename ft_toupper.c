/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:09:28 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:02:53 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main (void)
{
	int a = 'a';
	int b = 'A';

	printf("before:%c\n", a);
	printf("before:%c\n", b);
	printf("after:%c\n", ft_toupper(a));
	printf("after:%c\n", ft_toupper(b));
	return (0);
}*/
