/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:50:16 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/05 21:15:11 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *rs;

	rs = malloc(size + 1);
	if (rs == NULL)
		return (0);
	else
	{
		ft_bzero(rs, size + 1);
		return (rs);
	}
}
