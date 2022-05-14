#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s2[i] == s1[i])
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
	char str1[] = "123989";
	char str2[] = "123090";
	tmp = ft_strcmp(str1, str2);
	printf("%d\n",tmp);
}