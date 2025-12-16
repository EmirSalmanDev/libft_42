
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
