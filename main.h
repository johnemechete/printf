#ifndef PRINT
#define PRINT
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
struct print
{
	char c;
	int (*fptr)();
};
int print_char(va_list words);
int print_string(va_list words);
#endif
