#include <stdio.h>

int		ft_sqrt(int ab)
{
	int tmp;

	if (ab == 0)
		return (0);
	
	tmp = 0;
	tmp = ab * ab;
	return (tmp);
}

// int main()
// {
// 	printf("%d\n", ft_sqrt(9));
// }