/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:27:31 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/03 16:09:28 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	int		i;

	i = 0;
	a = (char*)b;
	while (len-- > 0)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
