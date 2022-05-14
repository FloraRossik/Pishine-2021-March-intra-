#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;
	count  = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int main()
{
	char str[] = "Hello my name is Alsy";
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
}