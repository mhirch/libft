#include "libft.h"

int  ft_isalnum(int m)
{
    if ((m >= 65 && m <= 90 )||( m >= 97 && m <= 122) || (m >= 48 && m <= 57))
    return 1;
    else return 0;
}