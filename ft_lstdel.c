/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:30:20 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:30:22 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*save;
	t_list		*list;

	list = *alst;
	while (list)
	{
		save = list;
		del((save->content), save->content_size);
		free(save);
		list = list->next;
	}
	*alst = NULL;
}
