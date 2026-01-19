/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:43:54 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:04:13 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*loc;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	loc = (void *)malloc(nmemb * size);
	if (!loc)
		return (0);
	ft_bzero(loc, (nmemb * size));
	return (loc);
}
