#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main () {
   char **t;
   t = ft_split(",,hello,hi,,,dear,,", ',');
   int i;
   i = 0;
   while(t[i] != NULL)
      printf("%s\n", t[i++]);

   return(0);
}