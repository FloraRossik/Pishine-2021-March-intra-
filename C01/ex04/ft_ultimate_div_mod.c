#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div; 
	int mod;

	if (*b == 0)
		return ;
	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;

}

// int main()
// {
// 	int tmp1 = 27;
// 	int tmp2 = 3;

// 	ft_ultimate_div_mod(&tmp1, &tmp2);
// 	printf("%d  %d\n", tmp1, tmp2);

// }