/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 10:39:05 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/22 17:11:00 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fstr;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(fstr = (char *)malloc(ft_strlen(s) * sizeof(*fstr) + 1)))
		return (NULL);
	while (s[i])
	{
		fstr[i] = f(s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
