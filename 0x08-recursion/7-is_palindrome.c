/**
 * rev - reverse string
 *
 * @s: value from main
 *
 * Return: counter string
 */

char rev(char *s)
{
	if (*s == '\0')
		return (*s);

	return (rev(s + 1));
}

/**
 * stringlength - prints length of string recursively
 *
 * @s: value from main
 *
 * Return: length
 */


int stringlength(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (stringlength(s + 1) + 1);
}

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: value from main
 *
 * Return: 0 if false or 1 if true
 */


int is_palindrome(char *s)
{
	char reverse = rev(s);
	int counter = stringlength(s);

	if (counter == 0 || counter == 1)
		return (1);

	else
	{
		char first = *s;
		char end = reverse;

		if (first != end)
			return (0);

		else
			return (is_palindrome(s));
	}

}
