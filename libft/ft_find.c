/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qpupier <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/07 14:43:36 by qpupier      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/13 13:40:09 by qpupier     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_find(char *str, char c)
{
	while (*str && c)
		if (*str++ == c)
			return (1);
	return (0);
}
