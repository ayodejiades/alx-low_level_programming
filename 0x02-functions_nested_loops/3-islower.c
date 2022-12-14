#include "main.h"

/**
 *  _islower - checks whether or not a character is lower case
 *  @c: integer representing ascii value of character
 *  Return: 1 if itis lowercase or 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
