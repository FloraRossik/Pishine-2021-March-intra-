#include <unistd.h>

void	ft_print_alphabet(void)
{
	char Apl = 'A';

	while (Apl <= 'Z')
	{
		write(1, &Apl, 1);
		Apl++;
	}
}

int main()
{
	ft_print_alphabet();
}