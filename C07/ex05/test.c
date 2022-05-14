#include <stdlib.h>
#include <stdio.h>

int		ft_find_symb(char *str, char c)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (count);
		i++;
		count++;
	}
	return (0);
}

int		ft_count_str(char *str, char *sep)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find_symb(sep, str[i]) == 0)
		i++;
		if (ft_find_symb(sep, str[i]) > 0)
			return (i);
		
	}
}
int		ft_count_till_sep(char *str, char *sep)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find_symb(sep, str[i]) == 1)
			return (i);
	}
	return (i);
}

int		ft_count_word(char *str, char *sep)
{
	int i;
	int count;

	if (str == NULL || sep == NULL || *str == 0)
		return (0);

	count = 0;
	i = 1;
	if (ft_find_symb(sep, str[0]) == 0)
		count++;

	while (str[i] != '\0')
	{
		if (ft_find_symb(sep, str[i]) == 0)
			if (ft_find_symb(sep, str[i - 1]) > 0)
				count++;
		i++;
	}
	return (count);
}


int main()
{
	int tmp;
	char *str = "finklsasj";
	char *sep = "hbj";
	tmp = ft_count_till_sep(str,sep);
	printf("%d\n", tmp);
}
