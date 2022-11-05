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

char	 *ft_strchr(char *str, int to_find)
{
	int	i;

	i = 0;
	if (!to_find)
		return (str + ft_strlen(str));
	if (to_find > 255)
		return(str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
				return (&str[i]);
		i++;
	}

	return (0);
}