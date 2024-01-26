#include "minitalk.h"

void args_check(int argc, char **argv)
{
    int i;
    
    i = -1;
    if(argc != 3)
    {
        ft_printf("invalid number of params");
        exit(EXIT_FAILURE);
    }
    
}