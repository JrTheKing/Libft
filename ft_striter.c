/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenson- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 05:20:36 by gbenson-          #+#    #+#             */
/*   Updated: 2018/03/05 05:20:39 by gbenson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @Function ft_striter A function that goes through and applies a function f to
** each part of the string s.
** @Param1 char *s The string pointer to apply f to all of its parts.
** @Param2 void (*f)(char *) a function we will appply to each part of s.
** @Return void this is a void function and relies on side effects.
** nothing is returned.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s != '\0')
	{
		f(s);
		s++;
	}
}