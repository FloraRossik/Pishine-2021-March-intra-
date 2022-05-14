#include <unistd.h>

void	ft_print_number(void)
{
	int num;

	num = 1;
	while(1 <= 9)
	{
		write(1, &num, 1);
		num++;
	}
}
int	main(void)
{
	ft_print_number();
}
