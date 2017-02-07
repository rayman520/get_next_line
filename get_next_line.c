/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:19:46 by cpierre           #+#    #+#             */
/*   Updated: 2017/02/07 14:51:53 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define HEY ft_putstr("hey\n");

static int	ft_use_leftover(char **line, char *buf, char **current)
{
	char *tmp;
	char *tmp2;

	tmp = *line;
	if (**current == '\0')
	{
		HEY
		(*current)++;
		*line = NULL;
		return (1);
	}
	tmp2 = *current;
	if ((*current = ft_strchr(tmp2, '\n')))
	{
		*(*current)++ = '\0';
		*line = ft_strjoin(tmp, tmp2);
		return (1);
	}
	else
	{
		*line = ft_strjoin(tmp, tmp2);
	}
	free(tmp);
	return (0);
}

int			get_next_line(int fd, char **line)
{
	static char	buf[BUFF_SIZE + 1];
	static char	*current = NULL;
	char		*tmp;
	uint32_t	red;

	buf[BUFF_SIZE] = '\0';
	if (!(*line = ft_strnew(0)))
		return (-1);
	if (current != NULL)
	{
		if (ft_use_leftover(line, buf, &current) == 1)
			return (1);
	}
  	while ((red = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = *line;
		buf[red] = 0;
		if ((current = ft_strchr(buf, '\n')))
		{
			*current++ = '\0';
			*line = ft_strjoin(tmp, buf);
			return (1);
		}
		else
		{
			*current++ = '\0';
			*line = ft_strjoin(tmp, buf);
		}
		free(tmp);
	}
	if (**line == 0)
	{
		line = NULL;
		return (0);
	}
	return (1);
}
