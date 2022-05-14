#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	if(dest == NULL || src == NULL)
		return (0);
	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
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
	char str1[] = "Hey\0         ";
	char str2[] = "Wo";
	ft_strncat(str1, str2, 6);
	printf("%s\n", str1);
}