#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int i;
	int out[10];
	
	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 0)
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


void	ft_ft(int *nbr)
{
	*nbr = -82;
}

int main()
{
	int tmp;

	tmp = -78;
	ft_ft(&tmp);
	ft_putnbr(tmp);	
}