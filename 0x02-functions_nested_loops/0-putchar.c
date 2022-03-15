#include "holberton.h"

/**
 * main - prints "Holberton"
 *
 * Return: 0 if execution was successful
 */

int _putchar(char c)
{
	char *text = "Holberton\n";
	int textLen = 10;
	int i = 0;

	for (; i < textLen; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
