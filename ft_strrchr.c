#include "libft.h"

char	 *ft_strrchr(char *str, int to_find)
{
	int	i;

	i = ft_strlen(str);
	if (!to_find)
		return (str + ft_strlen(str));
	if (to_find > 255)
		return(str);
	if(str[0] == '\0')
		return NULL;
	while (i--)
	{
		while ( str[i] == to_find)
        {
				return (&str[i]);
        }
	}
	return (0);
}