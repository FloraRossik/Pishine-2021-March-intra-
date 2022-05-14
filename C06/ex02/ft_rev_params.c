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
	int i;

	i = argc - 1;
	while (i >= 1)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}