/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 14:00:23 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/21 16:37:45 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			cur;

	if (dest == src)
		return (dest);
	cur = 0;
	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == (unsigned char)c)
			return (c1 + cur + 1);
		cur++;
	}
	return (NULL);
}
