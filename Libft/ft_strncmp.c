#include "libft.h"
int ft_strncmp (const char *s1, const char *s2, size_t size)
{
    size_t i;
    i = 0;
    if(!size)
        return( NULL);

    while(s[i] && i < size - 1 && s1[i] == s2[i])
        i++;

    return ((unsigned char)s1[i] - (unsigned char)s2[i]); 
}