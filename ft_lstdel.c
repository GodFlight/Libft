/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkeli <rkeli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:27:58 by rkeli             #+#    #+#             */
/*   Updated: 2019/04/09 18:31:03 by rkeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;

	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		link = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = link;
	}
	*alst = NULL;
}
