#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	int out[10];

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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	a = 24;
	b = 0;

	if (b == 0)
		return;

	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int one = 0;
	int two = 0;
	int result_div;
	int resul_mod;
	ft_div_mod(one, two, &result_div, &resul_mod);
	ft_putnbr(result_div);
	write (1, "\n", 1);
	ft_putnbr(resul_mod);
	write (1, "\n", 1);
}