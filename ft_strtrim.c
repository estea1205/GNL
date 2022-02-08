/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:21:39 by eteh              #+#    #+#             */
/*   Updated: 2022/02/08 15:57:46 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t beg;
	size_t end;
	char *newstr;
	
	if (!s1 || !set)
		return (0);
	beg = 0;
	while(s1[beg] != '\0' && ft_strchr(set, s1[beg]) != NULL)
		beg++;
	end = ft_strlen(s1 + beg);
	if(end)
	{
		while(s1[end + beg - 1] != '\0' && ft_strchr(set, s1[end + beg - 1] != '\0'))
			end--;
	}
	if(!(newstr = malloc(sizeof(char) * (end + 1))))
		return (0);
	ft_strlcpy(newstr, s1 + beg, end);
	newstr[end] = '\0';
	return (newstr);
}
