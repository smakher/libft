#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t l_dst;
    size_t l_src;
    size_t i;
    
    l_dst = 0;
    l_src = 0;
    i = 0;
    while (l_dst < dstsize && dst[l_dst])
        l_dst++;
    while (src[l_src])
        l_src++;
    if (l_dst == dstsize)
        return (l_dst + l_src);
    while (src[i] && (l_dst + i) < (dstsize - 1))
    {
        dst[l_dst + i] = src[i];
        i++;
    }
    dst[l_dst + i] = '\0';
    return (l_dst + l_src);
}