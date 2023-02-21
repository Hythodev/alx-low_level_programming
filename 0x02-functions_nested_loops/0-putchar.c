#include <main.h>

/**
 * main - program entry
 *
 * Description: prints _putchar string
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int l = 0;

	while (l < 8)
	{
		_putchar(word[l]);
		l++;
	}
	_putchar('\n');
	return (0);
}
