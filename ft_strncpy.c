/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:33:16 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:33:17 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((len > 0) && (src[i]) != '\0')
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len--)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
