
#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	buf[BUFF_SIZE + 1];
	static char	*current = NULL;
	char		*tmp;
	uint32_t	red;

	buf[BUFF_SIZE] = '\0';
	if (!(*line = ft_strnew(0)))
		return (EXIT_FAILURE);
	red = 0;
	tmp = NULL;
	if (*current)
	{
/*		ft_use_leftover(*line, buf, current);*/
	}
	while ((red = read(fd, buf, BUFF_SIZE)) > 0)
	{
		tmp = *line;
		buf[red] = 0;
		if (current = ft_strchr(buf, '\n'))
		{
			*line = ft_strjoin(tmp, buf);
			return (1);
		}
		else
		{
			*current++ = '\0';
			ft_strjoin(tmp, buf);
		}
		free(tmp);
	}
	return (1);
}
