/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:42:24 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 23:42:24 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int to_find)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	if (!to_find)
		return (str + ft_strlen(str));
	if (str[0] == '\0')
		return (NULL);
	while (i--)
	{
		while (str[i] == (char)to_find)
			return ((char *)&str[i]);
	}
	return (NULL);
}
