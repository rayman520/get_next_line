#ifndef __GET_NEXT_LINE_H__
# define __GET_NEXT_LINE_H__

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# include "libft/libft.h"

# define BUFF_SIZE 2048

int		get_next_line(int fd, char **line);

#endif
