/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:17:56 by eteh              #+#    #+#             */
/*   Updated: 2022/01/21 14:20:48 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t length;
	char *newstr;
	
	i = 0;
	if(!s1 || !s2)
		return (0);
	
	length = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if(!(newstr=(char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	while (*s1 != '\0')
		newstr[i++] = *s1++;
	while (*s2 != '\0')
		newstr[i++] = *s2;
	newstr[i] = '\0';
	return (newstr);
}
