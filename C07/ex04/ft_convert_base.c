#include <stdlib.h>
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

int		ft_check_symb(char *str)
{
	int i;
	int j;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if(str[i] == str[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		ft_find_poss(char *str, int nb)
{
	int i;

	if (str == NULL)
		return (-1);

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == nb)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_reverse_string(char *str)
{
	int 	start;
	int 	end;
	char	c;

	if (str == NULL)
		return ;
	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		c = str[start];
		str[start] = str[end];
		str[end] = c;
		start++;
		end--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	int new_nbr;
	char *out;
	int tmp;

	if (ft_check_symb(base_to) == 0 || ft_check_symb(base_from) == 0 || nbr == NULL)
		return (NULL);

	new_nbr = 0;
	i = 0;
	while (nbr[i] != '\0')
	{
		if (ft_find_poss(base_from, nbr[i]) == -1)
			return (NULL);
		new_nbr = new_nbr * ft_strlen(base_from) + ft_find_poss(base_from, nbr[i]);
		i++;
	}
	out = malloc(33);
	if (out == NULL)
		return (NULL);

	tmp = 0;
	i = 0;
	while (new_nbr > 0)
	{
		tmp = new_nbr % ft_strlen(base_to);
		new_nbr /= ft_strlen(base_to);
		out[i] = base_to[tmp];
		i++;
	}
	out[i] = '\0';
	ft_reverse_string(out);
	return (out);
}



int main()
{
	char *nb = "16a3";
	char *basee_from = "012345678a";
	char *basee_to = "0123456789";
	ft_convert_base(nb, basee_from, basee_to);
	printf("%s\n", ft_convert_base(nb, basee_from, basee_to));
}