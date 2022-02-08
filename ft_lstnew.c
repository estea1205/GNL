/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteh <eteh@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:24:14 by eteh              #+#    #+#             */
/*   Updated: 2022/01/28 17:38:07 by eteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*spc;

	if(!(spc = (t_list*)malloc(sizeof(*spc))))
		return(NULL);
	spc->content = content;
	spc->next = NULL;
	return(spc);
}
