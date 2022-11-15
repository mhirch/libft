/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:39:23 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/15 19:20:10 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (char *)dst;
	ps = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*pd++ = *ps++;
	}
	return (dst);
}
