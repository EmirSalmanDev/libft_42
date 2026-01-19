/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:17 by esalman           #+#    #+#             */
/*   Updated: 2026/01/19 13:04:48 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Void Pointer İndexlenemez
// size_t = unsigned long
// typecast
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*e;
	size_t			i;

	i = 0;
	e = (unsigned char *)b;
	while (len > 0)
	{
		e[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
