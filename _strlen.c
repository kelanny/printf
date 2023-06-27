#include "main.h"


int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
