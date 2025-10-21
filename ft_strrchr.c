#include "libft.h"

char *ft_strrchr(const char *s, int c){
    int i = 0;
    while(s[i])
        i++;
    if (c == '\0')
        return (char *)(s + i);
    while(i > -1){
        if (s[i] == c)
            return (char *)(s + i);
        i--;
    }
    return NULL;
}