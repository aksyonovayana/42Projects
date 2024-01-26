#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdard.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *input, ...);
int print_char(char c);
int print_string(char *s);
int print_pointer(unsigned long value, int asc);
int print_unsigned(unsigned int nb);
#endif