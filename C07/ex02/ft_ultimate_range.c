#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int *range, int min, int max)
{
	int count;
	
	range = malloc((max - min)*sizeof(int));

	if (range == NULL || min > max)
		return (-1);
	count = 0;
	while (min < max)
	{
		*range++ = min++;
		count++;
	}
	return (count);
}

int main()
{
	int range_str[9];
	int tmp;
	tmp = ft_ultimate_range(range_str, 34, 89);
	printf("%d\n", tmp);
}