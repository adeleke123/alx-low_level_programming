#include "main.h"

/**
 * _strlen - Counts the number of chars in a string
 * @s: this is a string
 *
 * Return: An integer which is the number of chars
 */
int _strlen(char *s)
{
	int no_of_chars;
	int track;

	for (no_of_chars = 0, track = 0; *(s + track) != '\0'; track++)
	{
		no_of_chars++;
	}

	return (no_of_chars);
}
