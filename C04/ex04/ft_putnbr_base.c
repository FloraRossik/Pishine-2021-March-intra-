#include <stdio.h>
#include <unistd.h>

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
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int tmp;
	char out[11];
	int i;

	if (base == NULL || ft_check_sym(base) == 0 || ft_strlen(base) < 2)
	return;

	tmp = 0;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr == 0)
		return;
	while (nbr > 0)
	{
		tmp = nbr % ft_strlen(base);
		nbr /= ft_strlen(base);
		out[i] = base[tmp];
		i++;
		
	}
	while (i > 0)
	{
		write(1, &out[i - 1], 1);
		i--;
	}
}

int main()
{
	char str[] = "0123456789";
	ft_putnbr_base(664546, str);
}