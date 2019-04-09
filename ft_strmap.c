/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:09:32 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/06 12:25:43 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*fs;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	fs = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fs == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fs[i] = (*f)(s[i]);
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
