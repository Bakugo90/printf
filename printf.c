#include  "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
    va_list ap;
    int count = 0;
    if(format == NULL)
        {
        return count;
    }
    va_start(ap, format);
    count = vfprintf(stdout, format, ap);
    va_end(ap);
    return count;
}