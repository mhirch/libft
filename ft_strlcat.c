/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:32:36 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 23:32:36 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t l)
{
	size_t	r;
	size_t	i;

	if (!dest && l == 0)
		return (ft_strlen(src));
	r = ft_strlen(dest);
	i = 0;
	if (l <= r)
		return (l + ft_strlen(src));
	while (src[i] && r < (l - 1))
		dest[r++] = src[i++];
	dest[r] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
