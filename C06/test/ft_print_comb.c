#include <unistd.h>

void	ft_print_comb()
{
	int num1 = 48;
	int num2 = 49;
	int num3 = 50;

	while (num1 <= '7')
	{
		num2 = 49;
		while (num2 <= '8')
		{
			num3 = 50;
			while (num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (num1 != 55 || num2 != 56 || num3 != 57)
				write (1, ",", 1);
				num3++;
			}
			num2++;
		}
		num1++;
	}	
}

int main()
{
	ft_print_comb();
}

