#include "main.h"

/**
  * check_prime - Checks for prime number
  * @n: the number to check
  * @i: The counter for  loop
  * @prime: count for checking prime
  * Return: 1 if n is prime, 0 otherwise
  */

int check_prime(int n, int i, int prime)
{
	/*printf("prime = %d\ni = %d\n", prime, i);*/

	if (i > n && prime > 2)
		return (0);

	if (prime == 2 && i == n)
		return (1);
	if (n % i == 0)
		prime++;
	return (check_prime(n, i + 1, prime));
}

/**
  * is_prime_number - Checks is a number is prime
  * @n: The given number
  * Return: 1 if n is prime, 0 otherwise
  */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (check_prime(n, 1, 0));
}
