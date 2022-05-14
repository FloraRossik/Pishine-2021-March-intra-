#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int i;
	i = 0;
	int j;
	j = i + 1;

	while (i <= size)
	{
		j = i + 1;
		while(j <= size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	int str[] = {23,45,67,89,12,34,55,1,0,-23};
	int i = 0;

	ft_sort_int_tab(str, 9);
	while(i <= 9)
	{
		printf("%d,", str[i++]);
	}
}