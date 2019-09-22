/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:15:28 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/19 22:35:16 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	byte;
	unsigned char	*mem;
	int				i;

	byte = (unsigned char)c;
	mem = (unsigned char *)b;
	i = 0;
	while (i < len)
		mem[i++] = byte;
	return (b);
}

/*
**	int		main(void)
**	{
**		size_t	size;
**		char	*mem;
**
**		size = 100;
**		mem = malloc(size);
**		ft_memset(mem, '2', size);
**		mem[size - 1] = '\0';
**		printf("%s\n", mem);
**	}
*/
