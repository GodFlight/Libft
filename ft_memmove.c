/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:35:10 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/11 13:51:02 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned char static		*special_for_two_line(unsigned char *s1,
													unsigned char *s2, size_t n)
{
	size_t i;

	i = 0;
	i = n - 1;
	while (n-- > 0)
	{
		s1[i] = s2[i];
		i--;
	}
	return (s1);
}

void						*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if (dst > src)
		s1 = special_for_two_line(s1, s2, n);
	else
	{
		while (n-- > 0)
		{
			s1[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((void*)s1);
}
