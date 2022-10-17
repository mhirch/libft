#include "libft.h"
#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t l)
{
    unsigned int r;
    unsigned int i;
    
    i = 0;
    if (!dest || !src)
		return (0);
    // while(src[r]) //return value(src length)
    //     r++;
    r = ft_strlen((char *)src);
    while(src[i] && i < (l - 1)) // copy src to dest
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // end of str
    return(r);
}
