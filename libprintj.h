#ifndef _LIBPRINTJ
#define _LIBPRINTJ

/* LIBARIES */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>

/* DEFINES */

/* PUBLIC FUNCTIONS */
void printj (char* format, ...);

/* PRIVATE FUNCTIONS */
int libprintj_count (char* format);

#endif // _LIBPRINTJ