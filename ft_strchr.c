/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:38:54 by marvin            #+#    #+#             */
/*   Updated: 2022/09/10 13:38:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int to_find)
{
	int	i;

	i = 0;
	if (!to_find)
		return (str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == (char)to_find)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
