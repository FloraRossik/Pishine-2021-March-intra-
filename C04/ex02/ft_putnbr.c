#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	char out[10];

	i = 0;
	if (nb == 0)
	write (1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while(nb > 0)
	{
		out[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &out[i - 1], 1);
		i--;
	}
}

int main()
{
	ft_putnbr(42);
}