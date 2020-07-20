/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:02:13 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/20 13:59:04 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		ft_strlen_del(char *str, char *delimiter)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0' && delimiter[j] != '\0')
	{
		if (str[i] != delimiter[j])
		{
			j = 0;
			if (str[i] == delimiter[j])
				j++;
		}
		else
			j++;
		if (delimiter[j] == '\0')
		{
			return (i - ft_strlen(delimiter) + 1);
		}
		i++;
	}
	return (0);
}

int		ft_count_substr(char *str, char *delimiter)
{
	int i;
	int j;
	int count;

	j = 0;
	i = -1;
	count = 0;
	while (str[++i] != '\0' && delimiter[j] != '\0')
	{
		if (str[i] != delimiter[j])
		{
			j = 0;
			j = str[i] == delimiter[j] ? j + 1 : j;
		}
		else
			j++;
		if (delimiter[j] == '\0')
		{
			count = ft_strlen_del(&str[i + 1], delimiter) ? count + 1 : count;
			j = 0;
		}
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
		{
			j = 0;
			if (str[i] == to_find[j])
				j++;
		}
		else
			j++;
		if (to_find[j] == '\0')
			return (&str[i + 1]);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		size;
	int		count;

	count = ft_count_substr(str, charset);
	if (!(res = (char **)malloc(sizeof(char *) * count + 1)))
		return (NULL);
	i = 0;
	while (i < count)
	{
		str = ft_strstr(str, charset);
		if ((size = ft_strlen_del(str, charset)))
		{
			if (!(res[i] = (char *)malloc(size + 1)))
				return (NULL);
			j = -1;
			while (++j < size + 1)
				res[i][j] = j == size ? '\0' : str[j];
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}
