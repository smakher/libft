#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
    size_t  i;
    int k;
    int j;

    i = 0;
    k = 0;
    if (!(needle) || needle[i] == '\0' )
        return (char *)(haystack);
    while (i <= len && haystack[k]){
        j = 0;
        if (haystack[k] == needle[j]){
            while (haystack[k + j] == needle[j] && needle[j] && haystack[k + j]){
                j++;
            }
            if (needle[j] == '\0')
                return (char *)(haystack + k);
        }
        k++;
    }
    return NULL;
}