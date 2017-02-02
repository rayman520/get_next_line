#include "get_next_line.h"

int main(void)
{
	char	*test;

	while (get_next_line(0, &test))
	{
		ft_putendl(test);
		free(test);
	}
	return (0);
}
