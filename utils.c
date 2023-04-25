#include "main.h"

/**
 * is_printable - function to check if char is printable
 * @c: char to check
 * Return: 1 if c is printable or 0
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - function to append ascci in hexadecimal code to buffer
 * @buffer: array of char
 * @i: index to start appending
 * @ascii_code: ASSCI CODE
 * Return: always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* note: hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - a function that verifies if char is a digit
 * @c: char to verify
 * Return: 1 if c is a digit or 0
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - a function to cast a number to the specified size
 * @size: number for type to be casted
 * @num: casted value
 * Return: casted value of number
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - a function to cast a number to the specified size
 * @size: number for type to be casted
 * @num: casted value
 * Return: casted value of number
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
