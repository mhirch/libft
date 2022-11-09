/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:35:05 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/08 22:35:05 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int m)
{
	if ((m >= 65 && m <= 90) || (m >= 97 && m <= 122) || (m >= 48 && m <= 57))
		return (1);
	else
		return (0);
}
