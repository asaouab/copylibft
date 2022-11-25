/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:25:55 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/09 12:36:28 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)

{
	char	ptr;
	int		i;

	ptr = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == ptr)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == ptr)
		return ((char *)s);
	return (0);
}
