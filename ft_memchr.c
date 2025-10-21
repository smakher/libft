#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n){
    size_t i;
    
    i = 0;
    unsigned char *s1 = (unsigned char *) s;
    unsigned char C = (unsigned char) c;
    while(i < n){
        if (s1[i] == C)
            return (s1 + i);
        i++;
    }
    return NULL;
}
#include <stdio.h>
#include <string.h>
int main(){
    void *s = "for her I would do anything";
    char *T = (char *)memchr(s, 'h', 4);
    char *M = (char *)ft_memchr(s, 'h', 4);
    printf("thieres : %s\nmine : %s\n", T, M);
}