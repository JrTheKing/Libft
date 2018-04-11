/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:34:39 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:34:40 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		result;
	int		minus;
	int		i;

	minus = 1;
	result = 0;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
	{
		if (s[i] == '-')
			minus = -1;
		i++;
	}
	while (ft_isdigit(s[i]) == 1)
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (minus * result);
}
