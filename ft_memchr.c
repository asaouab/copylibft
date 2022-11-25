/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:14:15 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/18 18:24:46 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	var;

	i = 0;
	str = (unsigned char *)s;
	var = (unsigned char )c;
	while (i < n)
	{
		if (str[i] == var)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
