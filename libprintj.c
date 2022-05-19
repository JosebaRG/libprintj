#include "libprintj.h"

int main()
{
    	printj("\nString: %s / Char: %c / Int: %d / This doesn't count: %%", "hello world", 'x', 1234);
    	return 0;
}

void printj (char* format, ...)
{
    	va_list arg;
	va_start(arg, format);
	int parameters = libprintj_count(format);
	printf("\nCantidad: %d", parameters);

//        char *str = va_arg(arg, char *);
//        char ltr = va_arg(arg, char);
//        int num = va_arg(arg, int);

	char *text;
	int text_pos = 0;

	while(*format)
	{
		printf("\n%c", format[text_pos]);
		text[text_pos] = format[text_pos];
		text_pos++;
		format++;
	}

	text[text_pos] = '\0';


    	va_end(arg);

    	printf("%s", text);
    	printf("%s", format);
}

int libprintj_count (char* format)
{
	char type[6] = {'s', 'c', 'd', 'f', '\0'};
	int counter = 0;
	int txt_length = strlen (format);
	int arr_lenght = strlen (type);
	int i, j;

	for(i=0; i<txt_length; i++)
	{
		if(format[i] == '%')
		{
			for(j=0; j<arr_lenght; j++)
			{
				if(format[i+1]==type[j])
				{
					counter++;
					break;
				}
			}
		}
	}

	return counter;
}
