#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int main()
{
  char *string = "hello";
  char  *newstr;

  printf("old string: %s\n", string);
  newstr = ft_strmapi(string, (2, ft_toupper));
  printf("new string: %s", newstr);
  return (0);
}
   