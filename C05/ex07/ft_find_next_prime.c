#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb++)
	{
		if (ft_is_prime(nb) == 1)
		return (nb);
	}
	return (2);
}

int main()
{
	printf("%d\n", ft_find_next_prime(25));
}