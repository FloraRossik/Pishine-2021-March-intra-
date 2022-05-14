#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	i = 0;
	int f;

	if (tab == NULL || size <= 0)
		return;

	while(i < size / 2)
	{
		f = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = f;
		i++;
	}
}

// int main()
// {
// 	int i = 0;
// 	int str[] = {1,2,3,4,5,6,7,8,9};
// 	// char *strP;
// 	// strP = str;

// 	ft_rev_int_tab(str, 8);
// 	while (i < 8)
// 	{
// 		printf("%d", str[i++]);
// 	}
// }