#include <unistd.h>

void	ft_print_comb()
{
	int num = 48;
	int num1 = 49;
	int num2 = 50;

	while (num <= 55)
	{
		num1 = 49;
		while (num1 <= 56)
		{
			num2 = 50;
			while (num2 <= 57)
			{
				write (1,&num, 1);
				write(1, &num1, 1);
				write (1, &num2, 1);
				if (num != 55 || num1 != 56 || num2 != 57)
					write(1, ",", 3);
				num2++;
			}
			
			num1++;
		}
		
		num++;
	}
}

int main()
{
	ft_print_comb();
}