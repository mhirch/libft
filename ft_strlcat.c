#include "libft.h"

#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t l)
{
    unsigned int r;
    unsigned int i;

    r = 0;
    i = 0;
    while(dest[r]) // dest lenght
        r++;
    while(src[i] && i < (l - 1)) // copy src to dest
    {
        dest[r] = src[i];
        i++;
		r++;
    }
    dest[i] = '\0'; // end of str
    return(r);
}