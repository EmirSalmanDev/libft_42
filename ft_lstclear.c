/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:55:57 by esalman           #+#    #+#             */
/*   Updated: 2026/01/21 21:56:22 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iteri;

	if (!lst)
		return ;
	while (*lst)
	{
		iteri = *lst;
		*lst = (*lst)->next;
		del(iteri->content);
		free(iteri);
	}
}
