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

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (!*s)
			return ('\0');

	}

	return (s);

}
