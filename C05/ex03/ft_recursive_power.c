#include <stdio.h>

int		ft_recursive_power(int ab, int power)
{
	if (power <= 0)
	return (1);
	if (ab >= 9 && power >= 10)
	return (0);
	return (ft_recursive_power(ab,power - 1) * ab);
}

int main()
{
	ft_recursive_power(6, 4);
	printf("%d\n", ft_recursive_power(9, 9));
}