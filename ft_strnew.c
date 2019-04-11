/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:50:16 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/11 14:30:38 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *rs;

	if (size == (size_t)(-1))
		return (NULL);
	if (!(rs = malloc(size + 1)))
		return (NULL);
	else
	{
		ft_bzero(rs, size + 1);
		return (rs);
	}
}