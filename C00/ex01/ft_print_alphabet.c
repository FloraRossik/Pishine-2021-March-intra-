#include <unistd.h>

void ft_alphabet(void)
{
		char Alp = 'a';

		while (Alp <= 'z')
		{
			write (1, &Alp, 1);
			Alp++;
		}
}

int main(void)
{
	ft_alphabet();
}