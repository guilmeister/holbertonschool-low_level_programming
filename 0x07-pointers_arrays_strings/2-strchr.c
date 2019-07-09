/**
 * _strchr -  locates a character in a string
 *
 * @s: value from main
 * @c: value from main
 *
 * Return: value of s / 0 if null
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}

	}

	return (0);

}
