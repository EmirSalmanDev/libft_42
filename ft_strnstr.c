/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalman <esalman@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:44:41 by esalman           #+#    #+#             */
/*   Updated: 2025/12/28 13:44:41 by esalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)&big[i]);
	while ((i < len) && (big[i]))
	{
		j = 0;
		if (big[i + j] == little[j])
		{
			while (big[i + j] == little[j] && (i + j) < len && little[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
