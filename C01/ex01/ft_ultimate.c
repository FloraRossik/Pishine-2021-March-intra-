#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	 *********nbr = 42;
}

int main ()
{
	int n = 0;
	int *p = &n;
	int **p2 = &p;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********b = &p8;
	ft_ultimate_ft(b);
	printf("%d\n", n);
}