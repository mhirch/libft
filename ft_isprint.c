#include "libft.h"

int  ft_isascii(int m)
{
    if (m >= 32 && m <= 126 )
    return 1;
    else return 0;
}