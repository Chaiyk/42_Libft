#include <stdlib.h>

void	ft_memcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_backcheck(char *temp_str, char const *set,
		int str_count, int set_count)
{
	if ((set[set_count] == '\0') && (temp_str[str_count] == '\0'))
		temp_str[str_count - set_count - set_count] = '\0';
	else if ((set[set_count] == '\0') && (temp_str[str_count] != '\0'))
		temp_str[str_count - set_count] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_count;
	int		set_count;
	char	*temp_str;

	str_count = 0;
	set_count = 0;
	temp_str = (char *) malloc (sizeof (s1));
	while (s1[set_count] == set[set_count])
		set_count++;
	if (set[set_count] == '\0')
		ft_memcpy(temp_str, s1 + set_count);
	else
		ft_memcpy(temp_str, s1);
	while (s1[str_count] != '\0')
	{
		if (s1[str_count] == set[set_count])
			set_count++;
		else
			set_count = 0;
		str_count++;
	}
	ft_backcheck(temp_str, set, str_count, set_count);
	return (temp_str);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*string, *set;

	string = "42Hello World!!42";
	set = "42";

	printf("\n-----\nCheck 1\n-----\nString: %s\nSet: %s\n
		Return: %s\n\n", string, set, ft_strtrim(string, set));

	string = "42Hello World!!";
	printf("-----\nCheck 2\n-----\nString: %s\nSet: %s\n
		Return: %s\n\n", string, set, ft_strtrim(string, set));

	string = "Hello World!!42";
	printf("-----\nCheck 3\n-----\nString: %s\nSet: %s\n
		Return: %s\n\n", string, set, ft_strtrim(string, set));
}
*/
