#include "libft.h"
size_t ft_strlen(char *str)
{
    size_t  c;
    
    c = 0;
    while (str[c])
    {
        c++;
    }
    return c;
}