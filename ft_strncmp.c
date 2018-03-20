/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:34:13 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:34:15 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	i = 0;
	while (n--)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		else if (!s1[i])
			return (0);
		i++;
	}
	return (0);
}
