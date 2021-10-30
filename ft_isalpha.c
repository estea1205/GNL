/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:00:11 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:25:56 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main (void)
{
	int	a = 'A';
	int	b = 'b';
	int	c = '5';
	int	d = '^';

	printf("%d\n",ft_isalpha(a));
	printf("%d\n",ft_isalpha(b));
	printf("%d\n",ft_isalpha(c));
	printf("%d\n",ft_isalpha(d));
	return (0);
}
*/
