#include <stdio.h>

int		ft_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int main()
{
	char *str1 = "My name is";
	printf("%d\n", ft_strlen(str1));
}