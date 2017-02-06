/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 08:29:14 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/21 16:52:52 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	short			i;
	short			is_neg;
	unsigned int	nbr;

	i = ft_intlen(n) - 1;
	if (!(str = (char *)malloc(sizeof(char) * i + 2)))
		return (0);
	nbr = n;
	is_neg = i + 1;
	if (n < 0)
	{
		nbr = -n;
		str[0] = '-';
	}
	while (i - (n < 0) >= 0)
	{
		str[i] = '0' + (nbr % 10);
		nbr /= 10;
		i--;
	}
	str[is_neg] = '\0';
	return (str);
}
