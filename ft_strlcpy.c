/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:34:31 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 23:34:31 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t l)
{
	unsigned int	i;

	i = 0;
	if (l > 0)
	{
		while (src[i] && i < l - 1)
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
