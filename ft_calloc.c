#include "libft.h"
#include<stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *x ;

    if (nmemb >= 2147483647 || size >= 2147483647)
        return NULL;
    x = (void *) malloc(nmemb * size);
    if(!x)
        return NULL;
    else
    {
        ft_bzero(x, nmemb*size);
        return x;
    }
}