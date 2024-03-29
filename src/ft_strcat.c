/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:36:49 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/21 02:08:12 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int y;

	i = 0;
	y = ft_strlen(s1);
	while (s2[i])
	{
		s1[y + i] = s2[i];
		++i;
	}
	s1[y + i] = '\0';
	return (s1);
}
