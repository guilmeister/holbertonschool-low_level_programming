/**
 * is_prime_number - checks for prime numbers
 *
 * @n: value from main
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{

	if (n % 1 == 0 && n % n == 0 && n != 1 && n > 0 && n % 2 != 0 && n % 5 != 0)
		return (1);
	else
		return (0);


}
