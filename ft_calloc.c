/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:32:40 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 22:34:29 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	if (nmemb >= 2147483647 || size >= 2147483647)
		return (NULL);
	x = (void *)malloc(nmemb * size);
	if (!x)
		return (NULL);
	else
	{
		ft_bzero(x, nmemb * size);
		return (x);
	}
}
