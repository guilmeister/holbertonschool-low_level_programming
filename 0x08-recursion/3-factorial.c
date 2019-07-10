/**
 * factorial - prints the factorial
 *
 * @n: value from main
 *
 * Return: value of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
	{
		return (n * factorial(n - 1));
	}
}
