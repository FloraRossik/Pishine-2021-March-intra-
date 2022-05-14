#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	char i;
	if(str == "")
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char tmp;
	char str[] = "1213@@#&&%∧ ∨ ∩ ∪";
	tmp = ft_str_is_printable(str);
	printf("%d\n", tmp);
}