#include "libft.h"
int dt_isprint (int c)
{
    return(c >= 32 && c <= 126);
}