#include <stdio.h>
#include <unistd.h>


int		ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		if(s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}


void		ft_sort_arr(char **str, int nb)
{
	char *tmp;
	int j;
	int i;

	i = 0;
	while (i <= nb - 1)
	{
		j = i + 1;
		while (j <= nb - 1)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
	}
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

	ft_sort_arr(argv, argc);

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}	
}