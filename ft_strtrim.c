/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:21:39 by eteh              #+#    #+#             */
/*   Updated: 2022/02/09 15:57:48 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_getstart(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_getend(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	beg = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (beg >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - beg + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + beg, end - beg + 1);
	return (newstr);
}
