/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:01:30 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:26:37 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
int	main (void)
{
	int	a = 'A';
	int	b = 'a';
	int	c = '	';
	int	d = ' ';
	int	e = '9';

	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(d));
	printf("%d\n", ft_isprint(e));
	return (0);
}
*/
