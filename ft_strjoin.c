/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:07:44 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/19 22:19:52 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t z;
    // size_t len;
    char *s3;

    i = 0;
    z = 0;
    // len = ft_strlen(((char *)s1) + ft_strlen((char *)s2) + 1);
    if(!s1 && !s2)
        return NULL;
    if(!s2)
        return (char *)s1;
    if(!s1)
        return (char *)s2;
    
    s3 = malloc(ft_strlen(((char *)s1) + ft_strlen((char *)s2) + 1));
    // s3 = malloc(sizeof(s1 + s2) + 1);
     if(!s3)
        return NULL;
    while(s1[i])
    {
        s3[z] = s1[i];
        i++;
        z++;
    }
    i = 0;
    while(s2[i])
    {
        s3[z] = s2[i];
        i++;
        z++;
    }
    s3[z] = '\0';
    return s3;
}