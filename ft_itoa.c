/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:57:03 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/18 11:37:08 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	size_t	intlen(int n)

{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*p;
	unsigned long	nbr;

	nbr = n;
	len = intlen (nbr);
		p = malloc (len + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
	nbr = nbr * (-1);
	}
	if (nbr == 0)
		p[0] = '0';
	p[len] = '\0';
	len = len - 1;
	while (nbr > 0)
	{
		p[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (p);
}
