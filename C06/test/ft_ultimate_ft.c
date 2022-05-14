#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	int out[10];

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb *= -1;
	}
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

void	ft_ultimate(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int num;
	num = 3;

	int *p1 = &num;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********b = &p8;
	ft_ultimate(b);
	ft_putnbr(num);
}