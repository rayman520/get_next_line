/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 12:09:10 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/22 17:13:38 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fstr;
	size_t	i;

	if (!s)
		return (0);
	if (!(fstr = (char *)ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		fstr[i] = s[start + i];
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
