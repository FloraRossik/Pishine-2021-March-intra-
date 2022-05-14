#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	char out[10];

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		out[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write (1, &out[i - 1], 1);
		i--;
	}
}

void	ft_swap(int *a, int *b)
{
	int tmp;
	*a = 96;
	*b = 90;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int one;
	int two;
	ft_swap(&one, &two);
	ft_putnbr(one);
	write(1, "\n", 1);
	ft_putnbr(two);
	write(1, "\n", 1);
}