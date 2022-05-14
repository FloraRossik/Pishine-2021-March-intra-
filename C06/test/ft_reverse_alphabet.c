#include <unistd.h>

void	ft_reverse_alphabet()
{
	char Alp = 'Z';

	while (Alp >= 'A')
	{
		write(1, &Alp, 1);
		Alp--;
	}
}

int main()
{
	ft_reverse_alphabet();
}