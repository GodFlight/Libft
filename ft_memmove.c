/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:35:10 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/03 20:10:01 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	s1 = (char*)dst;
	s2 = (char*)src;
	if (dst > src)
	{
		i = n - 1;
		while (n-- > 0)
		{
			s1[i] = s2[i];
			i--;
		}
	}
	else
	{
		while (n-- > 0)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return ((void*)dst);
}
