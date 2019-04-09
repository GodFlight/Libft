/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:38:54 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/06 12:44:23 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fs;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	fs = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fs == NULL)
		return (0);
	while (s[i] != '\0')
	{
		fs[i] = (*f)(i, s[i]);
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
