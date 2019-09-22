/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:43:51 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 02:09:19 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i] == needle[j] && j < len)
		{
			++i;
			++j;
		}
		if (j == len)
			return (&haystack[i - j]);
		j = 0;
		++i;
	}
	return (NULL);
}
