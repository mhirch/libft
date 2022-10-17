#include "libft.h"

char	 *ft_strrchr(char *str, int to_find)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i--)
	{
		while ( str[i] == to_find)
        {
				return (&str[i]);
		        i++;
        }
	}
	return (0);
}