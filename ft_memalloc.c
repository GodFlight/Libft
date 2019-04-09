/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:32:11 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/06 12:26:58 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *rs;

	rs = malloc(size);
	if (rs == NULL)
		return (NULL);
	else
	{
		ft_bzero(rs, size);
		return (rs);
	}
}
