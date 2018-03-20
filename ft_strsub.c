/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:22:33 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:22:35 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new_string;
	unsigned int	i;

	if (s != NULL)
	{
		new_string = (char*)malloc(sizeof(char) * len + 1);
		if (new_string != NULL)
		{
			i = 0;
			while (i < len)
			{
				new_string[i] = s[start];
				start++;
				i++;
			}
			new_string[i] = '\0';
			return (new_string);
		}
	}
	return (0);
}
