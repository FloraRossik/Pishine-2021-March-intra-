#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int tmp;

	if (nb <= 0)
		return (1);

	i = 1;
	tmp = 1;
	while(i <= nb)
	{
		tmp = tmp * i;
		i++;
	}
	return (tmp);
}

// int main()
// {
// 	ft_iterative_factorial(5);
// 	printf("%d\n", ft_iterative_factorial(7));
// }