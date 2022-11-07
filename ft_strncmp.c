#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t l)
{
    unsigned int i;

    i = 0;
    if (l != 0)
	{
		while(str1[i]  && str2[i]  && str1[i] == str2[i]  && i < l - 1)
			i++;
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return 0;
}