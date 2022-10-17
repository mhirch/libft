/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:26:42 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/09 21:20:08 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    
    i = 0;
    if (n <= 0)
    return 0;
    else
    while (i < n - 1 && ((char *)s1)[i] == ((char *)s2)[i])
            i++;
    return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}