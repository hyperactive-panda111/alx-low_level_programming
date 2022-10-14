#include "variadic_function.h"
/**
 * print_all - prints
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int a = 0, x, b = 0;
	const char f_arg[] = "cifs";
	char *s;

	va_start(args, format);
	while (format && format[a])
	{
		x = 0;
		while (f_arg[x])
		{
			if (format[a] == f_arg[x] && b)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(args, int)), b = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), b = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, float)), b = 1;
				break;
			case 's':
				s = va_arg(args, char *), b = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(args, s)), b = 1;
				break;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}

