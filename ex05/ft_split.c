/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:02:13 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/17 08:42:44 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int size;

	while (str[size])
		size++;
	return (size);
}

int		ft_count_substr(char *str, char *delimiter)
{
	int count;
	int i;
}

char	**ft_split(char *str, char *charset)
{
	char **res;
	return (res);
}
