#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;
	if (str == "")
		return (1);
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str[] = "asd";
	tmp = ft_str_is_lowercase(str);
	printf("%d\n", tmp);
}