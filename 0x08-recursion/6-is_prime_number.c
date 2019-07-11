/**
 * check - checker for prime
 *
 * @x: value from main
 * @checker: value from main
 *
 * Return: value negative 1 or 1
 */

int check(int x, int checker)
{

	if (x == checker)
		return (1);

	else if (x % checker != 0)
		return (check(x, checker + 1));

	else if (x % checker == 0)
		return (0);

	else
		return (0);
}

/**
 * is_prime_number - checks for prime
 *
 * @n: value from main
 *
 * Return: value negative 1 or root
 */

int is_prime_number(int n)
{

	int prime;

	if (n < 2)
		return (0);

	prime = check(n, 2);

	return (prime);
}
