#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;
	count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int		ft_count_symb(char **str, int nb)
{
	int tmp;
	int i;
	i = 0;

	tmp = 0;
	while (i < nb)
	{
		tmp += ft_strlen(str[i]);
		i++;
	}
	return (tmp);
}

char	*ft_strjoin(int size, char **strrs, char *sep)
{
	int i;
	int j;
	int k;
	char *new_str;
	char *tmp;

	if (size == 0 || strrs == NULL || sep == NULL)
		return (NULL);

	new_str = malloc(ft_count_symb(strrs, size) + (ft_strlen(sep) * (size - 1)) + 1);

	if (new_str == NULL)
		return (NULL);

	i = 0;
	tmp = new_str;
	while (i < size)
	{
		j = 0;
		while (strrs[i][j] != '\0')
		{
			*new_str++ = strrs[i][j];
			j++;
		}
		k = 0;		
		while (sep[k] != '\0' && i != size - 1)
		{
			*new_str++ = sep[k];
			k++;
		}
		i++;
	}
	*new_str = '\0';
	return (tmp);
}


int main(int argc, char **argv)
{
	char *tmp;
	char *sep;
	sep = " | ";

	tmp = ft_strjoin(argc - 1 , argv + 1, sep);
	printf("%s\n", tmp);
}