#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(fd, &c[i], 1);
		i++;
	}
}
/*
int     main(void)
{
	char *str;

	str = "Hello World!";
	ft_putstr_fd(str, 1);

	write(1, "\n", 1);

	str = "What Is This???";
	ft_putstr_fd(str, 1);
}
*/
