char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	casted_c;

	casted_c = (unsigned char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (casted_c == s[len])
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
