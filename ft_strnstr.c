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
