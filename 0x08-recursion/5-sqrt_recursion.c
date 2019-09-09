/**
 * check - checker for square root
 *
 * @x: value from main
 * @lmt: value from main
 *
 * Return: value negative 1 or root
 */

int check(int x, int lmt)
{

	if (x * x == lmt)
		return (x);

	else if (x <= lmt)
		return (check(x + 1, lmt));

	else
		return (-1);
}

/**
 * _sqrt_recursion - calculates square root of n
 *
 * @n: value from main
 *
 * Return: square root stored in root
 */

int _sqrt_recursion(int n)
{
	int root = check(0, n);

	return (root);
}
