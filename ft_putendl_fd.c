#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
int	main(void)
{
	char *str;

	str = "Hello World!!";
	ft_putendl_fd(str, 1);

	str = "What Is This?!?";
	ft_putendl_fd(str, 1);
}
*/
