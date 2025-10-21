#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
#include <string.h>
#include <stdio.h>
int main(){
    void *d = NULL;
    void *s = "hello there!";
    char *ptr = (char *)memcpy(d, s, 13);
    //char *p = (char *)ft_memcpy(d, s, 13);
    printf("T : %s\n", ptr);
}