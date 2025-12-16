#include <stddef.h>

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
