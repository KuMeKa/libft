/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:19:28 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 01:59:42 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	const unsigned char	*s;
	unsigned char		*mem;

	s = (const unsigned char *)src;
	mem = (unsigned char *)dst;
	i = len - 1;
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	else
		while (i >= 0)
		{
			mem[i] = s[i];
			--i;
		}
	return (dst);
}

/*
**#include <string.h>
**#include <stdio.h>
**int	main(void)
**{
**	size_t	size;
**	char	*mem1;
**	char	*mem2;
**	char	*mem;
**
**	mem = "123456789";
**	size = ft_strlen(mem);
**
**
**	mem1 = (char *)malloc(size + 2);
**	ft_memcpy(mem1, mem, size);
**	mem1[size] = '\0';
**	printf("%s\n", mem1);
**	memmove(mem1 + 1, mem1, size + 1);
**	printf("%s\n", mem1);
**
**	printf("\n\n");
**
**	mem2 = (char *)malloc(size + 2);
**	ft_memcpy(mem2, mem, size);
**	mem2[size] = '\0';
**	printf("%s\n", mem2);
**	ft_memmove(mem2 + 1, mem2, size + 1);
**	printf("%s\n", mem2);
**	free(mem2);
**}
*/
