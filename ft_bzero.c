#include "libft.h"
void ft_bzero(void *s, size_t n){
    size_t i;
    
    i = 0;
    char *p = (char *)s;
    while(i < n){
        p[i] = 0;
        i++;
    }
}