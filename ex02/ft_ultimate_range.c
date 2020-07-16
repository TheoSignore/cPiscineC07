/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:00:51 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/16 10:19:22 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	
	size = max - min;
	if (size <= 0)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc(size);
	if (!range[0])
		return (-1);
	i = -1;
	while (i++ < size - 1)
	{
		range[0][i] = min;
		min++;
	}
	return (size);
}
