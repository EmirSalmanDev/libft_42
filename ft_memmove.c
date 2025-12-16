/*
** Handles memory overlap:
** If the destination is after the source (dst > src), we copy from end to start
** to avoid overwriting data that hasn't been copied yet.

** Overlap Example:
** Data: [1, 2, 3, 4, 5, 6], src at '1', dst at '2', len = 3.
**
** Forward Copy (WRONG):
** 1. dst[0] = src[0] -> [1, 1, 3, 4, 5, 6] ('2' is overwritten by '1')
** 2. dst[1] = src[1] -> Reads the NEW '1', writes '1' -> [1, 1, 1, 4...]
** Result: Data corruption.
**
** Backward Copy (CORRECT):
** Copy starts from the end (src[2] to dst[2]), preserving src[1] ('2')
** until it is needed.
*/

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
