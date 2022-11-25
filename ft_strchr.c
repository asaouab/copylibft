/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:44:05 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/17 14:56:50 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ptr;
	int		i;

	ptr = (char )c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ptr)
			return ((char *)s + i);
	i++;
	}
	if (s[i] == ptr)
		return ((char *) s + i);
	return (0);
}
