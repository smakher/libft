#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n){
    size_t  i;

    i = 0;
    unsigned char *s = (unsigned char *)s1;
    unsigned char *ss = (unsigned char *)s2;
    while (i < n)
    {
        if (s[i] != ss[i])
            return s[i] - ss[i];
        i++;
    }
    return s[i] - ss[i];
}
#include <stdio.h>
#include <string.h>
int main(){
    const void *s = "for her I wouÝld do anything";
    const void *ss = "for her I would do anything";
    printf("thieres : %d\nmine : %d\n", memcmp(s, ss, 20), ft_memcmp(s, ss, 20));
}