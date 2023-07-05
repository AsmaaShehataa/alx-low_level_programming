#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - eturns 1 if the input integer is a prime number
 * @n: number of prime numbers
 * Return: boolean
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calc if the number is a prime on a recursive basis.
 * @n: number of prime
 * @i: iteration index
 * Return: 1 if the number is prime; 0 otherwise
*/

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
