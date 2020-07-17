/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:02:13 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/17 08:42:44 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *base);
int		ft_in_base(char c, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_itoa_base(long int nbr, char *cnv_nbr, char *base, int ndx);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			sign;
	int			size;
	char		*cnv_nbr;
	long int	nbr_value;
	long int	order;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nbr_value = ft_atoi_base(nbr, base_from);
	size = 1;
	sign = nbr_value < 0 ? -1 : 1;
	if (nbr_value < 0)
		size++;
	order = 1;
	while (order < (nbr_value * sign))
	{
		order *= ft_strlen(base_to);
		size++;
	}
	size--;
	if (!(cnv_nbr = (char *)malloc(size + 1)))
		return (NULL);
	ft_itoa_base(nbr_value, cnv_nbr, base_to, size - 1);
	cnv_nbr[size] = '\0';
	return (cnv_nbr);
}
