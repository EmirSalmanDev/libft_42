/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:10:07 by esalman           #+#    #+#             */
/*   Updated: 2025/12/13 17:25:19 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Void Pointer İndexlenemez
// size_t = unsigned long
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
