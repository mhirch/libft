#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    str = malloc(sizeof(s));
    if(!str)
        return (NULL);
    i = 0;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = 0;
    return str;
}