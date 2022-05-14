#include <unistd.h>

void ft_reverse_aplphabet(void)
{
	char Alp = 'z';

	while (Alp >= 'a')
	{
		write(1, &Alp, 1);
		Alp--;
	}
}

int main ()
{
	ft_reverse_aplphabet();
}