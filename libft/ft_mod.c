/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_mod.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qpupier <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/09 13:32:49 by qpupier      #+#   ##    ##    #+#       */
/*   Updated: 2019/01/09 13:35:34 by qpupier     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_mod(int a, int b)
{
	return (a - b * (a / b));
}
