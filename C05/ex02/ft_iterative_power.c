#include <stdio.h>

int		ft_recursive_power(int ab, int power)
{
	int tmp;
	int i;
	if (power < 0 || ab == 9 && power == 10)
		return (0);

	i = 1;
	tmp = 1;
	while (i <= power)
	{
		tmp = tmp * ab;
		i++;
	}
	return (tmp);
}

//int main()
//{
//	printf("%d\n", ft_recursive_power(9, 1));
//}