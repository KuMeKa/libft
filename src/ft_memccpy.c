/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:56:36 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 01:58:00 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		byte;
	const unsigned char	*s;
	unsigned char		*mem;

	byte = (unsigned char)c;
	s = (const unsigned char *)src;
	mem = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		mem[i] = s[i];
		if (mem[i] == byte)
			return (dst + i + 1);
		++i;
	}
	return (NULL);
}

/*
**#include <string.h>
**#include <stdio.h>
**int		main(void)
**{
**	size_t	size;
**	char	*mem;
**	char	*test1;
**	char	*test2;
**
**	size = 1;
**	mem = malloc(size);
**	test1 = malloc(size);
**	test2 = malloc(size);
**	ft_memset(mem, '*', size);
**	mem[size - 1] = '\0';
**	//mem[50] = '+';
**	printf("%p\n%s\n", memccpy(test1, mem, 's', size), test1);
**	printf("%p\n%s\n", ft_memccpy(test1, mem, 's', size), test1);
**}
*/
