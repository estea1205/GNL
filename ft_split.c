/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:42:32 by eteh              #+#    #+#             */
/*   Updated: 2022/02/09 16:06:02 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j] != c && s[j])
			i++;
		while (s[j] != c && s[j])
			j++;
	}
	return (i);
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		str_len;
	char	**ptr;

	str_len = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (str_len + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < str_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = init_str(s, c);
		if (!ptr[i])
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
