#include <unistd.h>

void print_comb(char *n1, char *n2)
{
	char space = ' ';
	char comma[2] = {',', ' '};

	write(1, n1, 2);
	write(1, &space, 1);
	write(1, n2, 2);

	if(n1[0] != '9' || n1[1] != '8')
		write(1, comma, 2);
}

void ft_print_comb2()
{
	char n1[2], n2[2];

	for(int counter1 = 0; counter1 <= 98; counter1++)
	{
		for(int counter2 = counter1 + 1; counter2 <= 99; counter2++)
		{
			n1[0] = '0' + counter1 / 10;
			n1[1] = '0' + counter1 % 10;
			n2[0] = '0' + counter2 / 10;
			n2[1] = '0' + counter2 % 10;

			print_comb(n1, n2);
		}
	}
}