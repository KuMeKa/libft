/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:32:20 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 01:22:03 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	int				i;
	unsigned char	symbol;

	symbol = (unsigned char)c;
	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mem[i] = symbol)
			return (&mem[i]);
		++i;
	}
	return (NULL);
}
