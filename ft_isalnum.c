/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 14:58:13 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:24:40 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int a = 'd';
	int b = '/';
	int c = '5';
	int d = ' ';
	printf("%d\n",ft_isalnum(a));
	printf("%d\n",ft_isalnum(b));
	printf("%d\n",ft_isalnum(c));
	printf("%d\n",ft_isalnum(d));
	return (0);
}
*/
