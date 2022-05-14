#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_find_symb(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
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
			if (ft_find_symb(sep, str[i - 1]))
				count++;
		i++;
	}
	return (count);
}

int		ft_count_word2(char *str, char *sep)
{
	int count;

	if (!str || !sep || *str == 0)
		return (0);
	count = 0;
	while (*str != 0)
	{
		while (*str != 0 && ft_find_symb(sep, *str) == 1)
			str++;
		if(*str != 0)
			count++;
		while (*str != 0 && ft_find_symb(sep, *str) == 0)
			str++;		
	}

	return (count);
	
}

int		ft_count_till_sep(char *str, char *sep)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_find_symb(sep, str[i]) == 1)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *sep)
{
	int i;
	int j;
	char **split;
	int word_size;

	split = malloc(   (ft_count_word(str, sep) + 1) * sizeof(char *)    );
	if (split == NULL)
		return (NULL);
	
	i = 0;
	while (*str != '\0')
	{
		word_size = ft_count_till_sep(str, sep);
		if (word_size > 0)
		{
			split[i] = malloc((word_size + 1) * sizeof(char));
			if (split[i] == NULL)
				return (NULL);
			j = 0;
			while (j < word_size)
			{
				split[i][j] = *str;
				str++;
				j++;
			}
			split[i][j] = 0;
			i++;
		}
		str++;
	}
	split[i] = NULL;

	return (split);
}

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

int main(int argc, char **argv)
{
	int i;
	char **tmp;

	if (argc < 3)
		return 1;

	char *str = argv[1];
	char *sep = argv[2];

	tmp = ft_split(str, sep);
	i = 0;
	while (tmp[i])
	{
		printf("%s\n",tmp[i]);
		i++;
	}
	return 0;	
}