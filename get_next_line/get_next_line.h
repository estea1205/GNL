/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:34:10 by eteh              #+#    #+#             */
/*   Updated: 2022/04/11 12:47:10 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_getline(char *string);

char	*ft_save(char *string);

char	*ft_read(int fd, char *string);

char	*get_next_line(int fd);

size_t	ft_strlen(char *s);

char	*ft_strchr(char *s, int c);

char	*ft_strjoin(char *s1, char *s2);

#endif
