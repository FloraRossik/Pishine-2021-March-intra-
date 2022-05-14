#include <stdio.h>

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

int		ft_check_sym(char *str)
{
	int j;
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
			return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}



int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int tmp;

	if (ft_check_sym(base) == 0 || base == NULL || ft_strlen(base) == 0)
		return (0);

	i = 0;
	j = 0;
	tmp = 0;
	while (base[i] != '\0')
	{
		while (base[i] == str[j])
		{
			tmp = tmp * ft_strlen(base) + i;
			j++;
			i = 0;
			i++;
			if (str[j] == '\0')
				return (tmp);
		}
		i++;
	}
	return (0);
}

int main()
{
	int tmp;
	char base_tmp[] = "AnFghDklop";
	char str_tmp[] = "Flpg";
	tmp = ft_atoi_base(str_tmp, base_tmp);
	printf("%d\n", tmp);
}