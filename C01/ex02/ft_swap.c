#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

// int main()
// {
// 	int p1;
// 	int p2;

// 	p1 = 25;
// 	p2 = 1;
// 	ft_swap(&p1,&p2);
// 	printf("p1 =  %d  p2 = %d\n", p1, p2);
// }