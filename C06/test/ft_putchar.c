#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char c = 'G';
	ft_putchar(c);
}