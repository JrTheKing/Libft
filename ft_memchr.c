/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:52:00 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/02 22:52:02 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*point;
	size_t			i;

	i = 0;
	point = (unsigned char*)s;
	while (n--)
	{
		if (point[i] == (unsigned char)c)
			return (&point[i]);
		i++;
	}
	return (NULL);
}
