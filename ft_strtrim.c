/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:23:07 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:23:08 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_sub(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*new;

	start = 0;
	if (!s)
		return (NULL);
	while ((s[start]) && (ft_sub(s[start]) == 1))
		start++;
	end = ft_strlen(s) - 1;
	while ((end != 0) && (ft_sub(s[end]) == 1))
		end--;
	if (start == end || end == 0)
	{
		new = (char*)malloc(1);
		new[0] = '\0';
		return (new);
	}
	new = ft_strsub(s, (unsigned int)start, (size_t)(end - start + 1));
	return (new);
}
