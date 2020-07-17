/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:57:42 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/16 17:18:14 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		res_size;
	char	*res;

	i = 0;
	res_size = 0;
	if (size == 0)
	{
		if(!(res = (char *)malloc(sizeof(char))))
			return (NULL)
		return (res);
	}
	while (i < size)
	{
		res_size += ft_strlen(strs[i]);
		i++;
	}
	res_size += size * ft_strlen(sep);
	if (!(res = (char *)malloc(res_size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
