/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 02:19:03 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/23 02:46:39 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (size + 1 == 0)
		return (NULL);
	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	while (i < size + 1)
		str[i++] = '\0';
	return (str);
}
