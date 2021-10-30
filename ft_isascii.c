/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:00:50 by eteh              #+#    #+#             */
/*   Updated: 2021/10/22 11:25:00 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127 )
		return (1);
	return (0);
}
/*
int	main (void)
{
	int	a = 'd';
	int	b = 'H';
	int	c = '	';
	int	d = '*';
	int	e = '6';
	
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(d));
	printf("%d\n", ft_isascii(e));
	return (0);
}
*/
