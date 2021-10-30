/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:09:00 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:03:13 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int main (void)
{
	int a = 'a';
	int b = 'A';
	
	printf("before:%c\n", a);
	printf("before:%c\n", b);
	printf("after:%c\n", ft_tolower(a));
	printf("after:%c\n", ft_tolower(b));
	return (0);
}
*/
