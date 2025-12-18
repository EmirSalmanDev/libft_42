#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*string1;
	const unsigned char	*string2;

	i = 0;
	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((i < n - 1) && string1[i] == string2[i])
		i++;
	return (string1[i] - string2[i]);
}
