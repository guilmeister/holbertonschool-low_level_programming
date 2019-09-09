/**
 * _strlen_recursion - prints length of string recursively
 *
 * @s: value from main
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}

}
