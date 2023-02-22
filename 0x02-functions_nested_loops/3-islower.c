#include "main.h"

/**
*_islower-check if character is lowercase.
*@c:character to check if it is lowercase.
*Return:0-if lowercase,1-if not.
i*/

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
