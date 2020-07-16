/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:17:01 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/16 09:30:07 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	size = 0;
	while (src[size])
		size++;
	dup = (char *)malloc(size + 1);
	if (!dup)
		return (NULL);
	i = -1;
	while (i++ < size)
		dup[i] = src[i];
	return (dup);
}
