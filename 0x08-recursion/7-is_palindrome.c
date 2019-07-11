/**
 * _strlen_recursion - prints length of string recursively
 *
 * @z: value from main
 *
 * Return: length
 */

int _strlen_recursion(char *z)
{
	if (*z == '\0')
		return (0);

	else
		return (_strlen_recursion(z + 1) + 1);
}

/**
 * checker - checks for palindrome
 *
 * @start: value from main
 * @end: value from main
 * @a: value from main
 *
 * Return: 1/0 if palindrome or not
 */

int checker(char *a, int start, int end)
{
	if (end == 0 || end == 1)
		return (1);

	else if (a[start] == a[end])
		return (checker(a, start + 1, end - 1));

	else
		return (0);
}

/**
 * is_palindrome - returns value from checker function
 *
 * @s: value from main
 *
 * Return: value from checker function
 */

int is_palindrome(char *s)
{
	int x = _strlen_recursion(s);
	int y = checker(s, 0, x - 1);

	return (y);
}
