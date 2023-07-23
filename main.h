#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _printf_c(char content);
int _printf_s(char *content);

#endif /* MAIN_H */
