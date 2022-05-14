#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char str[] = "Hello World";
	char str1[10];

	ft_strcpy(str1, str);
	printf("%s\n", str1);
}