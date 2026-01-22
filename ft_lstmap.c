/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:47:41 by esalman           #+#    #+#             */
/*   Updated: 2026/01/22 13:05:32 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*iteri;

	if (!lst || !f || !del)
		return (NULL);
	iteri = lst;
	while (iteri)
	{
		del(iteri->content);
		f(iteri->content);
		iteri = iteri->next;
	}
	return (lst);
}
