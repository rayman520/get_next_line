/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 05:18:17 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/21 13:17:03 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(str1) == 0 && !ft_strlen(str2))
		return ((char*)str1);
	while (str1[i] && i < n)
	{
		j = 0;
		while (str1[i + j] && str1[i + j] == str2[j] && i + j < n)
			j++;
		if (!str2[j])
			return ((char*)str1 + i);
		i++;
	}
	return (NULL);
}
