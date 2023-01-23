#include "main.h"
int _printf(const char *format, ...)
{
	va_list words;
	int len, i, j;
	
	va_start(words, format);
	struct print functions[] = {
		{'c', print_char},
		{'s', print_string}
	};
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
		j = 0;
		while (j < 2)
		{
			if (format[i] == functions[j].c)
				len = functions[j].fptr(words);
			if (len == 0)
				return (-1);
			else
				return (len);
		}
	}
}
