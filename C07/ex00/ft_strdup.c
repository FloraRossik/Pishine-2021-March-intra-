#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(const char *s)
{
	char *copy_str;
	char *tmp;
	
	if (s == NULL)
		return (NULL);

	copy_str = malloc(ft_strlen((char *)s) + 1);

	if (copy_str == NULL)
		return (NULL);
	
	tmp = copy_str;
	while (*s != '\0')
	{
		*copy_str++ = *s++;
	}
	*copy_str = '\0';
	return (tmp);
}

int main()
{
	char *str = "Hello World";
	char *new_str;
	
	new_str = ft_strdup(str);
 	printf("%s\n", new_str);
}