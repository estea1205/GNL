/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:39:12 by eteh              #+#    #+#             */
/*   Updated: 2022/04/12 15:21:22 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	copy;

	copy = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		copy++;
		s++;
	}
	return (copy);
}

char	*ft_strchr (char *s, int c)
{
	char	chr;

	chr = (char)c;
	if (!s)
		return (0);
	while (!s)
	{
		if (*s == chr)
			return ((char *) s);
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if(!s1 || !s2 )
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
	{
		while (s1[++i] != '\0')
			newstr[i] = s1[i];
	}
	while (s2[j] != '\0')
		newstr[i++] = s2[j++];
	newstr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
   return (newstr);	
}
