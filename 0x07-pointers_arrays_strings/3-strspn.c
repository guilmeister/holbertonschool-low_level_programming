/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: value from main
 * @accept: value from main
 *
 * Return: value of counter
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	int counter = 0;

	while (accept[x] != s[y] || accept[x] != '\0')
	{
		counter++;

		if (accept[x] == s[y])
		{
			return (counter);
		}

		if (s[y] == '\0')
		{
			x++;
		}

		y++;

	}

	return (0);
}
