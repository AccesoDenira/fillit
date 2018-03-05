/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   points.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 10:24:32 by jpollore          #+#    #+#             */
/*   Updated: 2018/03/05 10:27:48 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_point		*create_point(int len)
{
	t_point *point;

	if ((point = (t_point *)ft_memalloc(sizeof(*point))))
	{
		point->x = len % 5;
		point->y = (len + 5 - 1) /	5;
	}
	return (point);
}

void		free_point(t_point *point)
{
	if (!point)
		return ;
	free(point);
	point = NULL;
}

void		free_minmax_points(t_point **points, int n)
{
	int count;

	if (!points || !n)
		return ;
	count = (n >= 1 && n <= 2) ? 1 : 2;
	while (count--)
		free(*points++);
	*points = NULL;
}