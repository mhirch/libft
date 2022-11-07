#include "libft.h"

#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t l)
{
    size_t r;
    size_t i;

    r = ft_strlen(dest);
    i = 0;
    if(l <= r)
        return (l + ft_strlen(src));
    while(src[i] && r < (l - 1)) // copy src to dest

        dest[r++] = src[i++];
    dest[r] = '\0'; // end of str
    return(ft_strlen(dest) + ft_strlen(&src[i]));
}
