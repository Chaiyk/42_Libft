#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(1, &s[i]);
		i++;
	}
}
/*
void	f(unsigned int i, char* chr)
{
	printf("%s\n", chr);
	i++;
}


int main(void)
{
	char *s;

	s = "abcdefg";
	printf("\nString: %s\n", s);
	ft_striteri(s, *f);
	printf("Return: %s\n", s);
}
*/
