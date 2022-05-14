#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;
	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		if (dest[j] == '\0')
			return (dest);
		if (dest[j] != '\0')
		{
			dest[i] = '\0';
			return (dest);
		}
		j++;
	}
}


// int main()
// {
// 	char str[] = "Hello World";
// 	char str1[12];

// 	ft_strncpy(str1, str, 10);
// 	printf("%s\n", str1);
// }