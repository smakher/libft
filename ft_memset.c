#include "libft.h"
#include <string.h>

void *ft_memset(void *s, int c, size_t n){
     unsigned char *s1 = (unsigned char *)s;
     unsigned char C = (unsigned char)c;
     size_t i = 0;
     while (i < n){
        s1[i] = C;
        i++;
     }
     return s;
}
#include <stdio.h>
#include <string.h>
int main(){
    char p[] = "For her I will do anything";
    // printf("before memset : %s\n", p);
    // char *t = (char *)ft_memset((void *)p, 'A', sizeof(p));
    // char *t1 = (char *)ft_memset((void *)p, '|', sizeof(p));
    // char *t2 = (char *)ft_memset((void *)p+1, '_', sizeof(p));
    // char *t3 = (char *)ft_memset((void *)p, '|', sizeof(p));
    void *p1 = memset(p, -1, 7);
    printf("%s\n", (char *)p1);
}