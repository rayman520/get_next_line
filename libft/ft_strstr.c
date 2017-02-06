/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 05:07:47 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/21 14:43:55 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(str1) == 0 && !ft_strlen(str2))
		return ((char*)str1);
	while (str1[i])
	{
		j = 0;
		while (str1[i + j] && str1[i + j] == str2[j])
			j++;
		if (!str2[j])
			return ((char*)str1 + i);
		i++;
	}
	return (NULL);
}
