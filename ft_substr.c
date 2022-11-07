#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

char *ft_substr(char const *s, unsigned int start ,size_t len)
{
    char *substring;
    size_t i;

    i = 0;
    if(!s)
        return(NULL);
    substring = malloc(sizeof(char) * len + 1);
    if (!substring )
        return (NULL);
    if ( start >= (unsigned int)ft_strlen((char *)s))
    {   
        *substring = '\0' ;
        return(substring);
    }
         while( i < len && s[start])
        {
            substring[i] = s[start];
            i++;
            start++;
        }
        substring[i] = '\0';
        return (substring);

}
// int main()
// {
//     printf("%s",ft_substr("hola", 0, 18446744073709551615));
// }