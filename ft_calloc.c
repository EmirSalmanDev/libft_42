#include <stddef.h>
#include <stdlib.h>

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
