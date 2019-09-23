/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:36:11 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/19 22:42:00 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	byte;
	unsigned char	*mem;
	int				i;

	byte = '\0';
	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
		mem[i++] = byte;
}

/*
**int		main(void)
**{
**	size_t	size;
**	char	*mem;
**
**	size = 100;
**	mem = malloc(size);
**	ft_bzero(mem, size);
**	write(1, mem, 100);
**}
*/
