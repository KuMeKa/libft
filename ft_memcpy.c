/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:42:21 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 01:22:49 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	const unsigned char	*s;
	unsigned char		*mem;

	s = (const unsigned char *)src;
	mem = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		mem[i] = s[i];
		++i;
	}
	return (dst);
}

/*
**int		main(void)
**{
**	size_t	size;
**	char	*mem;
**	char	*test;
**
**	size = 100;
**	mem = malloc(size);
**	test = malloc(size);
**	ft_memset(mem, '2', size);
**	mem[size - 1] = '\0';
**	ft_memcpy(test, mem, size);
**	printf("%s\n", test);
**}
*/
