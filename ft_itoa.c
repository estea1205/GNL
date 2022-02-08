/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:24:47 by eteh              #+#    #+#             */
/*   Updated: 2022/01/21 14:33:45 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int len(long nb)
{
	int len;
	
	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while(nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *str;
	long nb;
	int i;
	
	nb = n;
	i = len(nb);
	if(!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i--] = '\0';
	if(nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if(nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	if(nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

int main(void)
{
	printf("%s\n", ft_itoa(-012));
	return(0);
}
