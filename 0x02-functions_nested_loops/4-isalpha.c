#include "main.h"
/**
 * _isalpha - main function
 *
 * @t: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int t)
{
	if ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z'))
	{
		return (1);
	}
	return (0);
}
