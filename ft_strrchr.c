#include "libft.h"

char	 *ft_strrchr(char *str, int to_find)
{
	int	i;

	i = ft_strlen(str);
	if (!to_find)
		return (str + ft_strlen(str));
	if(str[0] == '\0')
		return NULL;
	while (i--)
	{
		while ( str[i] == (char)to_find)
				return ((char *)&str[i]);
	}
	return (0);
}