/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:39:23 by mhirch            #+#    #+#             */
/*   Updated: 2022/10/09 15:35:58 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    // salam o3alaykom
    // size_t i;
    char *pd;
    char *ps;

    pd = (char *)dst;
    ps = (char *)src;
    // i = 0;
    while(n--)
    {
        *pd++ = *ps++;
    }
    return dst;
}