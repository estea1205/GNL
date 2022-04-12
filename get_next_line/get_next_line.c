/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:02:31 by eteh              #+#    #+#             */
/*   Updated: 2022/04/11 15:12:56 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read(int fd, char *string)
{
	char	*temp;
	int		read_byte;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!temp)
		return (NULL);
	read_byte = 1;
	while (!ft_strchr(string, '\n') && read_byte != 0)
	{
		read_byte = read(fd, temp, BUFFER_SIZE);
		if(read_byte == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[read_byte] = '\0';
		string = ft_strjoin(string, temp);
	}
	free(temp);
	return (string);
}

char *ft_getline(char *string)
{
	char	*tempbuff;
	int	i;

	i = 0;
	if (!string[i])
		return (NULL);
	while (string[i] && string[i] != '\n')
		i++;
	tempbuff = malloc(sizeof(char) * (i + 2));
	if (!tempbuff)
		return (NULL);
	i = 0;
	while (string[i] && string[i] != '\n')
	{
		tempbuff[i] = string[i];
		i++;
	}
	if (string[i] == '\n')
	{
		tempbuff[i] = string[i];
		i++;
	}
	tempbuff[i] = '\0';
	return (tempbuff);
}

char *ft_save(char *string)
{
	char	*buff;
	int		i;
	int		j;

	i = 0;
	while (string[i] && string[i] != '\n')
		i++;
	if (!string[i])
	{
		free(string);
		return (NULL);
	}
	buff = (char *)malloc(sizeof(char) * (ft_strlen(string) - i + 1));
	if (!buff)
		return (NULL);
	i++;
	j = 0;
	while (string[i])
		buff[j++] = string[i++];
	buff[j] = '\0';
	free(string);
	return (buff);
}

char *get_next_line(int fd)
{
	static char	*string;
	char 		*line;

	if (fd < 0 ||BUFFER_SIZE <= 0)
		return (0);
	string = ft_read(fd, string);
	if (!string)
		return (NULL);
	line = ft_getline(string);
	string = ft_save(string);
	return (line);
}
