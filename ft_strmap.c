/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:21:17 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:21:19 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		lengh;
	int		i;

	if (s != NULL)
	{
		lengh = ft_strlen(s);
		new_string = (char*)malloc(sizeof(char) * lengh + 1);
		if (new_string != NULL)
		{
			i = 0;
			while (i < lengh)
			{
				new_string[i] = (*f)(s[i]);
				i++;
			}
			new_string[i] = '\0';
			return (new_string);
		}
	}
	return (0);
}
