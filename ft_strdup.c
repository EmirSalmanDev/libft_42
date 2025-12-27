#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*loc;

	i = 0;
	length = ft_strlength(s1) + 1;
	loc = (char *)malloc(1 * length);
	if (!loc)
		return (0);
	while (s1[i] != '\0')
	{
		loc[i] = s1[i];
		i++;
	}
	loc[i] = '\0';
	return (loc);
}
