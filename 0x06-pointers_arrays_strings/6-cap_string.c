#include "main.h"
/* more headers goes there */

/**
 * cap_string - string
 * @str: string param
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i, n;

	for (n = 0; str[n] != '\0'; ++n)
	;

	n = n + 1;

	for (i = 0; i < n; i++)
	{
		if (i == 0 && (str[i] != ' ' || str[i] != 9 || str[i] != 10 || str[i] != 44 
		|| str[i] != 59 || str[i] != 46 || str[i] != 33 || str[i] != 63 || 
		str[i] != 34 || str[i] != 40 || str[i] != 41) || 
		((str[i] != ' ' && str[i-1] == ' ') || (str[i] != 9 && str[i-1] == 9) || 
		 (str[i] != 10 && str[i-1] == 10) || (str[i] != 44 && str[i-1] == 44) || 
		 (str[i] != 59 && str[i-1] == 59) || (str[i] != 46 && str[i-1] == 46) || 
		 (str[i] != 33 && str[i-1] == 33) || (str[i] != 63 && str[i-1] == 63) || 
		 (str[i] != 34 && str[i-1] == 34) || (str[i] != 40 && str[i-1] == 40) || 
		 (str[i] != 41 && str[i-1] == 41)))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
