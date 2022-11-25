/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:21:34 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/19 15:47:33 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	unsigned int		len;
	unsigned int		i;
	char				*mal;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mal = malloc(len + 1);
	if (!mal)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mal[i] = f(i, s[i]);
		i++;
	}
	mal[i] = '\0';
	return (mal);
}
