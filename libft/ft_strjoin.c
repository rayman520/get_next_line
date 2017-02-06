/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 12:41:01 by cpierre           #+#    #+#             */
/*   Updated: 2017/02/06 10:00:02 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fstr;
	int		i;

	if (!s1 || !s2)
		return (0);
	if (!(fstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1)))
		return (NULL);
	i = 0;
	while (*s1)
	{
		fstr[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		fstr[i++] = *s2;
		s2++;
	}
	fstr[i] = '\0';
	return (fstr);
}
