#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;
	if (str == "")
		return (NULL);
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

int main()
{
	char str[] = "HOPKJJJ";
	ft_strlowcase(str);
	printf("%s\n", str);
}