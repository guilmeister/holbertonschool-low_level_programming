/**
 * _strstr - locates substring
 *
 * @haystack: value from main
 * @needle: value from main
 *
 * Return: value of haystack / 0 if null
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0, y = 0; haystack[x] != '\0'; x++)
	{
		if (needle[y] == haystack[x])
			return (&haystack[x]);
	}

	return (0);
}
