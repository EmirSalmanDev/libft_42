/*
 ** NOTE ON TYPE CASTING:
	** 1. Incoming Parameter (const char *s):
	** This pointer is "Read-Only". It points to an address where data cannot be
	** modified. Therefore, the expression &s[i] is naturally (const char *).
	**
	** 2. Return Type (char *):
	** The function prototype requires a "Read-Write" pointer. This implies that
	** the caller might want to modify the data at the returned address later.
	**
	** 3. The Conflict & Resolution:
	** Returning &s[i] directly would violate the 'const' promise (returning a
	** read-only address as read-write). We use the (char *) cast to explicitly
	** tell the compiler to discard the 'const' qualifier and bridge this gap.

** NOTE ON PARAMETER 'c' CASTING:
	** The function prototype receives 'c' as an 'int' due to historical C reasons.
	** However, we are searching for this value inside a 'char' string.
	** The standard requires 'c' to be converted to a character type before
	** comparison. This casting ensures that we treat the integer input as a
	** single byte (character) and ignore any high-order bits, matching the
	** data type of the string elements we are comparing against.

*/

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	casted_c;

	casted_c = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (casted_c == s[i])
			// Cast to remove const qualifier matching the return type
			return ((char *)&s[i]);
		i++;
	}
	if (casted_c == s[i]) // '\0'
		return ((char *)&s[i]);
	return (0);
}
