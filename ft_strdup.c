/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:16:23 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/20 02:58:07 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)malloc(ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}
