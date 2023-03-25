#include <unistd.h>

/**
 * _putchar - writes c to output
 *@c: char to write
 *
 * Return: c
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
