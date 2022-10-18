#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start ,size_t len)
{
    char *substring;
    size_t i;

    i = 0;
    if(!s)
        return(NULL);
   size_t l =  (unsigned int)ft_strlen((char *) &s[start]);
    if (l < len)
        len = l;
    substring = malloc(len + 1);
    if (!substring )
        return (NULL);
    if ( start >= (unsigned int)ft_strlen((char *)s))
    {   
        *substring = '\0' ;
        return(substring);
    }
         while( i < len && s[start])
        {
            substring[i] = s[start];
            i++;
            start++;
        }
        substring[i] = '\0';
        return (substring);

}


// char	*ft_substr(char  *s, unsigned int start, size_t len)
// {
// 	char	*s2;
// 	size_t	i;
// 	size_t	j;
// 	size_t	l;

// 	if (!s)
// 		return (NULL);
// 	l = ft_strlen(s + start);
// 	if (l < len)
// 		len = l;
// 	s2 = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!s2)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			s2[j++] = s[i];
// 		}
// 		i++;
// 	}
// 	s2[j] = '\0';
// 	return (s2);
// }