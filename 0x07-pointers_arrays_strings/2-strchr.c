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

	if (*s == '\0')
		return (s);

	for (s = 0; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}

	}

	return (0);

}
