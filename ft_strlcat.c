#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;

	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	s = 0;
	while ((i + s < dstsize - 1) && (src[s] != '\0'))
	{
		dst[i + s] = src[s];
		s++;
	}
	dst[i + s] = '\0';
	return (i + ft_strlen(src));
}
