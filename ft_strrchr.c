/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:43:32 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 02:03:08 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	symbol;

	symbol = (char)c;
	i = ft_strlen(s);
	if (symbol == '\0')
		return (&s[i + 1]);
	while (i-- >= 0)
		if (s[i] == symbol)
			return (&s[i]);
	return (NULL);
}
