#include "get_next_line.h"

#define HEY ft_putstr("hey\n");

int main(int argc, char **argv)
{
	char	*test;
	int fd1;
	int fd2;
	int line;

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	line = 0;

	while (get_next_line(fd1, &test))
	{
		ft_putnbr(++line);
		ft_putstr(" - ");
		ft_putendl(test);
		free(test);
	}
}
