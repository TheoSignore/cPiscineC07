/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:57:42 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/20 14:46:28 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

	res_size = 0;
	if (size == 0)
	{
		if (!(res = (char *)malloc(sizeof(char))))
			return (NULL);
		return (res);
	}
	i = -1;
	while (++i < size)
		res_size += ft_strlen(strs[i]);
	res_size += (size - 1) * ft_strlen(sep);
	if (!(res = (char *)malloc(res_size + 1)))
		return (NULL);
	ft_strcpy(res, strs[0]);
	i = 0;
	while (++i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
	}
	return (res);
}
