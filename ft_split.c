/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:12:25 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/25 15:46:06 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int count_str(const char *str, char c)
{
  int i;
  int z;
  
  i = 0;
  z = 0;
  while(str[i])
  {
    if(str[i] == c && str[i + 1] != c)
      z++;
    i++;
  }
  i = 0;
  if(str[i] == c )
    z--;
  i = ft_strlen(str) - 1;
  if(str[i] == c)
    z--;
  return z + 1;
}
char *ft_skip(int i,const char *s,char c)
{
  char *k;
  int j;
  int l;
  
  l = 0;
  j = i;
  while(s[j] != c && s[j])
    j++;
  k = malloc(j - i + 1);
  while(s[i] != c && s[i])
    k[l++] = s[i++];
  k[l] = 0;
  return (k);
}
char **ft_split(char const *s, char c)
{
    int i;
    int j;
    // char *s1;
    char **tab;
    
    i = 0;
    j = count_str(s, c);
    if(!s)
        return NULL;
    tab = malloc(sizeof(char *) * j + 1);
    if (!tab)
        return NULL;
    j = 0;
    while(s[i])
    {
        while(s[i] == c)
          i++;
        tab[j] = ft_strdup(ft_skip(i,s,c));
        while(s[i] != c && s[i])
          i++;
        j++;
    }
    tab[j] = NULL;
    return tab;
}