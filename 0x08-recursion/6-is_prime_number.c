#include "main.h"

/**
  * check_prime - Checks the prime number
  * @n: the number tested
  * @i: number before n
  * Return: the perfect square root
  */

int check_prime(int n, int i)
{
	if (i > n)
		return (1);
	if (n % i == 0 && i < n)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Tell if a number is prime or not
 * @n: the number
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
