#include "libft.h"
#include<stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *x = malloc(nmemb * size);

    if ((nmemb * size) == 0 || nmemb >= 2147483647 || size >= 2147483647)
        return NULL;
    else
    {
        ft_bzero(x, nmemb*size);
        return x;
    }
}