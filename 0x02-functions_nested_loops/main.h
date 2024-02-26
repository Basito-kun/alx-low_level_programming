#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the lower case alphabets with putchar only to stdout
 * @void: The character to print.
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the lower case alphabets repeatedly(x10) to stdout
 * @void: The character to print.
 */
void print_alphabet_x10(void);

int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

#endif
