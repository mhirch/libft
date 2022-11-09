/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:08:26 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 23:45:23 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		z;
	char	*trimmed;
	int		j;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	z = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;
	while (s1[i] && ft_strchr((char *)set, s1[z]) && z >= 0)
		z--;
	trimmed = (char *)malloc(sizeof(char) * (z - i) + 2);
	if (!trimmed)
		return (NULL);
	while (i <= z)
		trimmed[j++] = s1[i++];
	trimmed[j] = '\0';
	return (trimmed);
}
