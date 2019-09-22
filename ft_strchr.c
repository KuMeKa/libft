/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:43:11 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 02:08:31 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	symbol;

	symbol = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == symbol)
			return (&s[i]);
		++i;
	}
	if (symbol == '\0')
		return (&s[i + 1]);
	return (NULL);
}
