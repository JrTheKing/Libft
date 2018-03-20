/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:34:27 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/07 19:25:55 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dstlength;
	size_t		srclength;

	i = 0;
	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (size <= dstlength)
		return (srclength + size);
	while ((dst[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dstlength + srclength);
}
