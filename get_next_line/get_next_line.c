#include "get_next_line.h"

char *ft_readed_line(char *start)
{
    int i;
    char *line;

    if(!start || !start[0])
        return(NULL);
    i = 0;
    while(start[i] && start[i] != '\n')
        i++;
    if(start[i] == '\n')
        i++;
    line = (char *)malloc(1 + i * sizeof(char));
    if(!line)
        return(NULL);
    i = 0;
    while(start[i] && start[i] != '\n')
    {
        line[i] = start[i];
        i++;
    }
    if(start[i] == '\n')
        line[i++] = '\n';
    line[i] '\0';
    return(line);
}

char *ft_move_start(char *start)
{
    char *new_buff;
    int i;
    int j;

    i = 0;
    while(start[i] && start[i] != '\n')
        i++;
    if(start[i] == '\0')
    {
        free(start);
        return(NULL);
    }
    i += (start[i] == '\n');
    new_buff = (char *)malloc(1 + ft_strlen(start) - i);
    if(!new_buff)
        return(NULL);
    j = 0;
    while(start[i + j])
    {
        new_buff[j] = start[i + j];
        j++;
    }
    new_buff[j] = '\0';
    free(start);
    return(new_buff);
}

char *get_next_line(int fd)
{
    char *tmp;
    int fd_read;
    static char *start_str;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return(NULL);
    fd_read = 1;
    tmp = (char *)malloc(1 + BUFFER_SIZE * sizeof(char));
    if(!tmp)
        return(0);
    
}