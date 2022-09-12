#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			c = str[i];
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			c = "0123456789abcdef"[str[i] / 16];
			write(1, &c, 1);
			c = "0123456789abcdef"[str[i] % 16];
			write(1, &c, 1);
		}
		i++;
	}
}