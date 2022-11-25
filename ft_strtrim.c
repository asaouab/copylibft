/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:08:13 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/19 11:47:23 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		size;
	int		i;

	i = 0;
	if (s1 == 0)
		return (0);
	while (is_in_set(*s1, set))
		s1++;
	size = ft_strlen(s1) - 1;
	while (size >= 0 && is_in_set(s1[size], set))
		size--;
	result = malloc(size + 2);
	if (!result)
		return (0);
	while (size >= 0 && size-- + 1 > 0)
		result[i++] = *s1++;
	result[i] = '\0';
	return ((char *)result);
}
