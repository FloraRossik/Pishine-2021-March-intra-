#include <stdio.h>

int		*ft_strupcase(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
		}
	return (str);
}

int main()
{
	char str[] = "abghk12hkhkh";
	ft_strupcase(str);
	printf("%s\n", str);
}
