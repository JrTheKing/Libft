/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:18:07 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:18:08 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
			i++;
		while (i >= 0)
		{
			s[i] = '\0';
			i--;
		}
	}
}
