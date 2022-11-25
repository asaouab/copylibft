/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:14:26 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/18 19:15:01 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*str;
	unsigned char	*dtr;
	size_t			i;

	if (!dst && !src)
		return (0);
	str = (unsigned char *)src;
	dtr = (unsigned char *)dst;
	if (dtr > str)
	{
		i = len - 1;
		while (i < len)
		{
			dtr[i] = str[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
