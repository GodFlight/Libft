/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:07:34 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/05 20:43:07 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_compare(const char *s1, const char *s2, size_t len)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && len-- > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char			*ft_strnstr(const char *haystack,
						const char *needle, size_t len)
{
	int		i;

	i = 0;
	if (*needle == '\0')
		return ((char*)&haystack[i]);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if ((i + ft_strlen(needle) <= len) &&
			(!(ft_compare(&haystack[i], needle, len))))
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
