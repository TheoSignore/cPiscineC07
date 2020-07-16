/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:34:25 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/16 09:55:08 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *res;
	int i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	res = (int *)malloc(size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
