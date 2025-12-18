#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		new_c;
	const unsigned char	*p;

	i = 0;
	new_c = (unsigned char)c;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (new_c == p[i])
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
