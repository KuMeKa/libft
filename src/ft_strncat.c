/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:07:17 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 02:08:59 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int y;

	i = 0;
	y = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[y + i] = s2[i];
		++i;
	}
	s1[y + i] = '\0';
	return (s1);
}
