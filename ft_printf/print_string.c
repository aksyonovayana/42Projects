#include "ft_print.h"

int print_string(char *s)
{
    unsigned int i;

    i = 0;
    if (!s)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
    while (s[i] != '\0')
        i++;
    ft_putstr_fd(s, 1);
    return (i);
}