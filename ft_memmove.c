#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    size_t i = 0;
    if (dest == src || n == 0)
        return dest;
    if (dest > src)
    {
        while(i < n){
            d[i] = s[i];
            i++;
        }
    }
    else if(dest < src){
        d = d + n;
        s = s + n;
        while(n > 0)
        {
            d[n] = s[n];
            n--;
        }
    }
    return dest;
}
#include <stdio.h>
#include <string.h>
int main(){
    //char d[6];
    char s[] = "12345";
    char *t = (char *)ft_memmove(s+2, s, 3);
    printf("%s", t);
    printf("\n%s\n", s);
}