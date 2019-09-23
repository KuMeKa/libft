/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <unicolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 23:59:17 by unicolle          #+#    #+#             */
/*   Updated: 2019/09/23 02:07:02 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		beg;
	int		end;

	len = ft_strlen(s);
	beg = 0;
	end = len - 1;
	while (s[beg] && ft_isspace(s[beg]))
		++beg;
	if (beg == len)
		return (ft_strnew(0));
	while (end >= 0 && ft_isspace(s[end]))
		end--;
	if (!(str = (char *)malloc(end - beg + 1)))
		return (NULL);
	ft_strncpy(str, s + beg , end - beg + 1);
	str[end - beg + 1] = '\0';
	return (str);
}
