/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:17:13 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/05 16:09:15 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_compare(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	if (*needle == '\0')
		return ((char*)&haystack[i]);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (!(ft_compare(&haystack[i], needle)))
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
