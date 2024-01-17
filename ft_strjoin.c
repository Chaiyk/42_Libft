#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp_str;
	unsigned int	main_count;
	unsigned int	sub_count;

	main_count = 0;
	sub_count = 0;
	temp_str = (char *) malloc(sizeof (s1) + sizeof (s2));
	if (temp_str != 0)
	{
		while (s1[sub_count] != '\0')
		{
			temp_str[main_count] = s1[sub_count];
			main_count++;
			sub_count++;
		}
		sub_count = 0;
		while (s2[sub_count] != '\0')
		{
			temp_str[main_count] = s2[sub_count];
			main_count++;
			sub_count++;
		}
		temp_str[main_count] = '\0';
	}
	return (temp_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str1, *str2;

	str1 = "Hello ";
	str2 = "World!!";

	printf("\nString 1: %s\nString 2: %s\nReturn: %s\n"
		, str1, str2, ft_strjoin(str1, str2));
}
*/
