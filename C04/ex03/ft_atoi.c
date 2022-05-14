#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int tmp;
	int i;
	i = 0;

	tmp = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			tmp = tmp * 10 + str[i] - '0';
			i++;
		}
		else
			return (tmp);
	}
	return (0);
}

int main()
{
	int tmp;
	char str[] = "g678ha";
	tmp = ft_atoi(str);
	printf("%d\n", tmp);
}