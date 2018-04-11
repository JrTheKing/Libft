/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:21:27 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:21:28 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;
	unsigned int	lengh;

	if (s != NULL)
	{
		lengh = ft_strlen(s);
		new_string = (char*)malloc(sizeof(char) * lengh + 1);
		if (new_string != NULL)
		{
			i = 0;
			while (i < lengh)
			{
				new_string[i] = (*f)(i, s[i]);
				i++;
			}
			new_string[i] = '\0';
			return (new_string);
		}
	}
	return (0);
}
