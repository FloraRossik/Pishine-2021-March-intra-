#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;
	if (str == "")
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int main()
{
	int tmp;
	char str[] = "SSSSS";
	tmp = ft_str_is_uppercase(str);
	printf("%d\n", tmp);
}