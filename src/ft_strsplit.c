/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 01:28:21 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/23 02:46:39 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		j;
	int		k;

	if (!(str = (char **)ft_memalloc(sizeof(char *) * (ft_wrdcount(s, c) + 1))))
		return (NULL);
	j = 0;
	while (*s)
	{
		k = 0;
		while (*s == c)
			s++;
		if (!*s)
			break ;
		if (!(str[j] = ft_strnew(ft_strclen(s, c))))
			return (ft_arraydel(&str));
		while (*s != c)
			str[j][k++] = *(s++);
		++j;
	}
	return (str);
}
