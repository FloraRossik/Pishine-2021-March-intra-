#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	i = 0;
	if(dest == NULL || src == NULL)
		return (0);
	int j;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char str1[] = "Hey";
	char str2[] = "World";
	ft_strcat(str1, str2);
	printf("%s\n", str1);
}