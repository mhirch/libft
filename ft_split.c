/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:12:25 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 21:44:45 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int count_str(const char *str, char c)
{
  int i;
  int z;
  if (str == NULL)
  return (0);
  i = 0;
  z = 0;
  if (str[i] != c )
    z++;
  while(str[i])
  {
    if(str[i] == c && str[i + 1] != c && str[i + 1] != '\0' )
      z++;
    i++;
  }
  i = 0;
  return z ;
}

void f_free(char **tab , int j)
{
  while (j >= 0)
					{
					  free(tab[j]);
						j--;
					}
					free(tab);
}
void  skip(char const*s,int*i, int *index, char c)
{
      while (s[*i] && s[*i] == c)
			  (*i)++;
		  *index = *i;
		  while (s[*i] && s[*i] != c)
			  (*i)++;
}
char **ft_split(char const *s, char c)
{
    int i;
    int j;
    char **tab;
    int index;
    
    i = 0;
    j = 0;
    tab = malloc(sizeof(char *) * (count_str(s, c) + 1));
    if (!tab || !s)
        return NULL;
    while (i <= (int)ft_strlen(s) )
	  {
		  skip(s, &i ,&index, c);
		  if (index < i )
		  {
			  tab[j] = ft_substr(&s[index], 0, i - index);
			  if (!tab[j])
					f_free(tab, j);
			  j++;
		  }
		i++;
	 }
	tab[j] = NULL;
  return tab;
}