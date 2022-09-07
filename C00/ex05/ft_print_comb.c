#include <unistd.h>

void ft_print_comb()
{
	char comb[5] = {'0', '1', '2', ',', ' '};

	for(comb[0] = '0'; comb[0] <= '7'; comb[0]++)
	{
		for(comb[1] = comb[0] + 1; comb[1] <= '8'; comb[1]++)
		{
			for(comb[2] = comb[1] + 1; comb[2] <= '9'; comb[2]++)
			{
				if(comb[0] == '7')
					write(1, comb, 3);
				else
					write(1, comb, 5);
			}
		}
	}
}