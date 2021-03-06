/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_average.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qpupier <qpupier@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/19 11:45:35 by qpupier      #+#   ##    ##    #+#       */
/*   Updated: 2019/03/06 18:24:42 by qpupier     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

double	ft_average(int nb1, int nb2, double p)
{
	return (nb1 + p * (nb2 - nb1));
}
