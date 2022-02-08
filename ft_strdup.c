/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:09:53 by eteh              #+#    #+#             */
/*   Updated: 2022/01/21 14:12:13 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *new;
	int  i;
	
	if(!(new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return(0);
	
	i = 0;
	if(s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
