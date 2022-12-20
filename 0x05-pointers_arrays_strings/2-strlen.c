#include "main.h"
/**
 * strlen - returns the length of a string
 * @s: char to check
 */
  int _strlen(char *s)
{
	int a = 0;

	for(; *s++;)
		a++;
	return (a);
}
