#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int j;
	int i;
	i = 0;
	j = 0;

while(haystack[i] != '\0')
{
	j = 0;
	while (haystack[i] == needle[j])
	{
		j++;
		i++;
		if (needle[j] == '\0')
			return ((char *)haystack - j);
	}
	i++;
	}
	return ("NULL");
}

int main()
{
	char str[] = "Hello croupi jok flora";
	char find[] = "croup ";
	ft_strstr(str,find);
	printf("%s\n", ft_strstr(str, find));
}