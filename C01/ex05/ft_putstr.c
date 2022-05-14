#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int main()
// {
// 	char *str1 = "Hello World!";
// 	ft_putstr(str1);
// }