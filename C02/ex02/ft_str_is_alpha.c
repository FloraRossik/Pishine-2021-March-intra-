#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	if (str == NULL)
	return (1);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
	char str[17] = "tyynskan";

	tmp = ft_str_is_alpha(str);
	printf("%d\n", tmp);
}