/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:29:48 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:29:50 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(new_list->content = malloc(content_size)))
			return (NULL);
		new_list->content_size = content_size;
		ft_memcpy(new_list->content, content, content_size);
	}
	else
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	new_list->next = NULL;
	return (new_list);
}
