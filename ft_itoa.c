/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:36:11 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/31 19:02:10 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>

int count_nb(long nb)
{
    int i;
    
    i = 0;
    if ( nb < 0)
    {
      nb *= -1;
      i++;
    }
    while(nb >= 0)
    {
      nb = nb / 10;
      i++;
      if (nb == 0)
      {
        break;
      }
    }
    return i;
}
 char *ft_itoa(int n)
{
  char *nb;
  long nb2 = n;
  int j = count_nb(nb2);
  int last;
  last = 0;
  // if(!n)
  //   return NULL;

  // if (n < 0)
  //   j++;
  nb = malloc(sizeof(char) * j + 1);
  if(!nb)
    return NULL;
  last = j;
  if(nb2 < 0)
  {
    nb2 *= -1;
    nb[0] = '-';
    // printf("%d", n);
  }
  if (nb2 >= 0)
  {
  while(j-- >= 0)
  {
      nb[j] = ((nb2 % 10) + 48);
      // putchar(nb[0]);
      nb2 /= 10;
      if (nb2 == 0)
        break;
    }
  }
  nb[last] = '\0';
  return nb;
}

// int main() {

//   printf("%s--s", ft_itoa(-2147483648));
// }