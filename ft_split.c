/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:12:25 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/30 15:25:50 by mhirch           ###   ########.fr       */
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

char **ft_split(char const *s, char c)
{
    size_t i;
    int j;
    char **tab;
    size_t index;
    
    i = 0;
    j = count_str(s, c);
    if(!s)
        return NULL;
    tab = malloc(sizeof(char *) * j + 1);
    if (!tab)
        return NULL;
    j = 0;
    while (i <= ft_strlen(s) )
	  {
		  while (s[i] && s[i] == c)
			  i++;
		  index = i;
		  while (s[i] && s[i] != c)
			  i++;
		  if (index < i )
		  {
			  tab[j] = ft_substr(&s[index], 0, i - index);
        
			  if (!tab[j])
				{
					while (j >= 0)
					{
					  free(tab[j]);
						j--;
					}
					free(tab);
					return (0);
				}
			  j++;
		}
		i++;
	 }
	tab[j] = NULL;
    return tab;
}