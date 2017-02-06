/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 04:47:08 by cpierre           #+#    #+#             */
/*   Updated: 2017/02/06 16:39:09 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrmul(const char *s1, char *s2)
{
	char *scanp;
	int c;
	int sc;

	while ((c = *s1++) != 0)
	{
		scanp = s2;
		while ((sc = *scanp++) != 0)
		{
			if (sc == c)
				return ((char *)(s1 - 1));
		}
	}
	return (NULL);
}
