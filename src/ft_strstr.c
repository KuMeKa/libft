/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:43:41 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/22 22:51:56 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			++i;
			++j;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i - j]);
		j = 0;
		++i;
	}
	return (NULL);
}
