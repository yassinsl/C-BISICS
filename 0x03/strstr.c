char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}