/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalexand <nalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:26:26 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/23 02:46:39 by nalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arraydel(char ***array)
{
	int		i;

	while (*array[i])
		free(*array[i++]);
	free(*array);
	*array = NULL;
	return (*array);
}