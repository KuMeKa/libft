/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:39:19 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 01:55:52 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int y;

	i = 0;
	y = ft_strlen(dst);
	while (src[i] && i < size - y - 1)
	{
		dst[y + i] = src[i];
		++i;
	}
	dst[y + i] = '\0';
	return (y + i);
}
