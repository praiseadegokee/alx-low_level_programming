#include "main.h"
/**
 * _islower - main function
 *
 * @t: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

int _islower(int t)
{
	if (t >= 'a' && t <= 'z')
	{
		return (1);
	}
	return (0);
}
