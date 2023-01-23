#include "main.h"
int print_char(va_list words)
{
	int byte;
	char c;
	char *ch = &c;

	c = va_arg(words, int);
	byte = write(1, ch, 1);
	return (byte);
}
int print_string(va_list words)
{
	int byte;
	char *str = va_arg(words, char *);

	if (str == NULL)
		return -2;
	byte = write(1, str, strlen(str));
	return (byte);
}
