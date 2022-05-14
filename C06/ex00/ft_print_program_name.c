#include <unistd.h>

int		ft_strlen(char *str)
{
	int count;
	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	(void) argc;
	write (1, argv[0], ft_strlen(argv[0]));
	write (1, "\n", 1);
}