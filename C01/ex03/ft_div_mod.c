#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return;
	}
	*mod = a % b;
	*div = a / b;
}

// int main()
// {
// 	int tmp = 68;
// 	int tmp2 = 2;
// 	int save1;
// 	int save2;
// 	ft_div_mod(tmp, tmp2, &save1, &save2);
// 	printf("%d  %d\n", save1, save2);
// }