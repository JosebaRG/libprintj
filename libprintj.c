#include "libprintj.h"

int main()
{
    printj("\nString: %s / Char: %c / Int: %d / This doesn't count: %%", "hello world", 'x', 1234);
    return 0;
}

void printj (char* format, ...)
{
    va_list arg;
    va_start(arg, libprintj_count(format) );

        char *str = va_arg(arg, char *);
        char ltr = va_arg(arg, char);
        int num = va_arg(arg, int);

    va_end(arg);

    printf("%s", format);
    return 0;
}