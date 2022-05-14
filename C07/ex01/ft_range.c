#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *tmp;

	range = malloc((max - min) * sizeof(int));;
	if (range == NULL)
		return (NULL);
	if (max < min)
		return (NULL);
	
	tmp = range;
	while (min < max)
	{
		*range++ = min;
		min++;
	}
	return (tmp);
}

int main()
{
	int i;
	int *tmp;
	tmp = ft_range(4,8);
	
	i = 0;
	while (i < 4)
	{
		printf("%d\n", tmp[i]);
		i++;
	}
}