/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirch <mhirch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:36:11 by mhirch            #+#    #+#             */
/*   Updated: 2022/11/13 16:10:19 by mhirch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_nb(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb >= 0)
	{
		nb = nb / 10;
		i++;
		if (nb == 0)
		{
			break ;
		}
	}
	return (i);
}

static	char	*cpy_to_string(char *nb, long nb2, int j)
{
	while (j-- >= 0)
	{
		nb[j] = ((nb2 % 10) + 48);
		nb2 /= 10;
		if (nb2 == 0)
			break ;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	long	nb2;
	int		j;
	int		last;

	last = 0;
	nb2 = n;
	j = count_nb(nb2);
	nb = malloc(sizeof(char) * j + 1);
	if (!nb)
		return (NULL);
	last = j;
	if (nb2 < 0)
	{
		nb2 *= -1;
		nb[0] = '-';
	}
	if (nb2 >= 0)
		cpy_to_string(nb, nb2, j);
	nb[last] = '\0';
	return (nb);
}
