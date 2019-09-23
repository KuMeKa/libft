/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 02:10:31 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/23 02:07:02 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	int				i;

	i = 0;
	if (!(mem = (unsigned char *)malloc(size * sizeof(char))))
		return (NULL);
	while (i < size)
		mem[i++] = '\0';
	return (mem);
}
