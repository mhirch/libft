#include "libft.h"
#include <stddef.h>


size_t ft_strlcpy(char *dest, const char *src, size_t l)
{
  unsigned int i;
    
  i = 0;
  if(l > 0)
  {
    while(src[i] && i < l - 1) // copy src to dest
    {
        dest[i] = src[i];
        i++;
    }
    dest[i ] = '\0';
  }
  return ft_strlen((char *)src);
}