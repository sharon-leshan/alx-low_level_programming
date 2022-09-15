#include <unistd.h>
#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet - print lowercase
 * followed by newline
 */

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - print 10 times
 * followed by newline
 */

int _islower(int c);

/**
 * _islower - checks for lowercase
 */

int _isalpha(int c);

/**
 * _isalpha - checks for alphabet
 */

int print_sign(int n);

/**
 * print_sign - checks and prints sign of a number
 */

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

#endif
