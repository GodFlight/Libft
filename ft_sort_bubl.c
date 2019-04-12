/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:19:20 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/12 12:37:46 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_bubl(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	j = 0;
	i = 2;
	while (i < ac)
	{
		j = i;
		while (j > 0 && (ft_strcmp(av[j], av[j - 1]) < 0))
		{
			swap = av[j];
			av[j] = av[j - 1];
			av[j - 1] = swap;
			j--;
		}
		i++;
	}
}