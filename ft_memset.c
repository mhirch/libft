/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:48:33 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/12 18:16:08 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ch;
	size_t	i;

	ch = s;
	i = 0;
	while (i < n)
		ch[i++] = (unsigned char)c;
	return (ch);
}
