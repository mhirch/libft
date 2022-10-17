#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t l)
{
    unsigned int i;

    i = 0;
    if (l != 0)
	{
		while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]  && i < l - 1)
			i++;
		return (str1[i] - str2[i]);
	}
    return 0;
}