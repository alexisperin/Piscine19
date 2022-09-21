#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str, int output, int len)
{
	if (len == 0)
		len = ft_strlen(str);
	write(output, str, len);
}