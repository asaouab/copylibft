/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:43:34 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/19 16:22:58 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	size_t	i;
	void	*p;

	i = 0;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < count * size)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
