#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;

	while (i < n)
	{
		if (s1[i] == s2[i])
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
	char str1[] = "12345678";
	char str2[] = "123456788989";
	tmp = ft_strncmp(str1, str2, 9);
	printf("%d\n",tmp);
}