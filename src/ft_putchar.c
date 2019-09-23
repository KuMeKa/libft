/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 23:58:49 by nalexand          #+#    #+#             */
/*   Updated: 2019/09/23 02:46:36 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef union			s_uni
{
	int					bits;
	struct				s_parts
	{
		unsigned int	a : 6;
		unsigned int	b : 6;
		unsigned int	c : 6;
		unsigned int	d : 6;
	}					parts;
}						uni;

static void ft_unicode_putchar(unsigned char u_c)
{
	char	buf[2];
	uni		unicode;

	unicode.bits = u_c;
	buf[0] = unicode.parts.b | 0xC0;
	buf[1] = unicode.parts.a | 0x80;
	write(1, buf, 2);
}

void		ft_putchar(char c)
{
	if ((unsigned char)c > 127)
		ft_unicode_putchar((unsigned char)c);
	else
		write(1, &c, 1);
}
