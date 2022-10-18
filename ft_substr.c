#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *substring;
    size_t i;
    substring = ((char *)malloc(sizeof(char)*len + 1));
    if (!substring || !s)
        return (NULL);
    i = 0;
        while(len > i && s[start])
        {
            substring[i] = s[start];
            i++;
            start++;
        }
        substring[i] = ('\0');
        return (substring);
//     else
//         return (NULL);
}