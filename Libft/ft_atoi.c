#include "libft.h"
int ft_atoi (const char *str)
{
    int i;
    int sign;
    int result;
    i=0;
    result = 0;
    sign = 1;

    if(!str)
        return(NULL);

    i = 0;
    while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        i++; 

    if(str[i] == '-')
    {
        sign = -1;
        i++
    }
    else if(str[i] == "+")
        i++;

    while(str[i] && str[i] >= '0' && str[i]<= '9')
    {
        result *=10;
        result4
    }
    
}