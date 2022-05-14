#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int i;
	int j;

	if (dst == NULL || src == NULL)
		return (0);
	j = 0;
	i = 0;
	int count = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while(j < size && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	j = 0;
	while (dst[j] != '\0')
	{
		count++;
		j++;
	}
	return (count);
}

int main()
{
	int tmp;
	char str[] = "My name is ";
	char str2[] = "Florida glorya";
	tmp = ft_strlcat(str, str2, 15);
	printf("%d\n", tmp);
}