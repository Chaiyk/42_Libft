#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-21474836478", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
/*
int	main(void)
{
	int	num;

	num = 5;
	ft_putnbr_fd(num, 1);
	ft_putchar_fd('\n', 1);

	num = 123456;
	ft_putnbr_fd(num, 1);
	ft_putchar_fd('\n', 1);

	num = -123456;
	ft_putnbr_fd(num, 1);
	ft_putchar_fd('\n', 1);

	num = -2147483648;
	ft_putnbr_fd(num, 1);
	ft_putchar_fd('\n', 1);
}
*/
