/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 13:43:15 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/17 13:55:43 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || dest == src)
		return (dest);
	c1 = (char *)dest;
	c2 = (char *)src;
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return (dest);
}
