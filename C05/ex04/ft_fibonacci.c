#include <stdio.h>

int		ft_fibonachi(int index)
{
	int sum;
	int tmp2;
	int tmp;
	int i;

	if (index < 0)
		return (1);
	
	tmp2 = 1;
	tmp = 1;
	i = 0;
	sum = 0;
	while (i <= index - 3)
	{
		sum = tmp + tmp2;
		tmp = tmp2;
		tmp2 = sum;
		i++;
	}
	return (tmp2);
}

int main()
{
	ft_fibonachi(7);
	printf("%d\n", ft_fibonachi(10));
}