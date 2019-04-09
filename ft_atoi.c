/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:59:00 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/09 14:58:11 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*skip_something(char *str, size_t i)
{
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\v' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\f')
		i++;
	return (&str[i]);
}

static int		h_long(char *str, int is_neg_or_pos, size_t iter_count, int nb)
{
	if (is_neg_or_pos == 1)
	{
		if (iter_count == 19)
		{
			if (str[iter_count] > '7')
				return (-1);
			return (nb * is_neg_or_pos);
		}
		else if (iter_count > 19)
			return (-1);
	}
	else if (is_neg_or_pos == -1)
	{
		if (str[iter_count - 1] >= '8')
			return (0);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int		res;
	int		sgn;
	size_t	iter_count;
	size_t	i;

	res = 0;
	i = 0;
	sgn = 1;
	iter_count = 0;
	str = skip_something((char*)str, i);
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		sgn = -1;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
		res || iter_count ? iter_count++ : iter_count;
	}
	return (iter_count >= 19 ?
	(h_long((char*)&str[0], sgn, iter_count, res)) : (res * sgn));
}
