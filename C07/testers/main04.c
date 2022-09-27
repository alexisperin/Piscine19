#include <unistd.h>
#include <limits.h>

void ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	ft_convert_base("  +10", "0123456789", "01");
	write(1, "\n", 1);
	ft_convert_base("  +--+-+-+-4", "0123456789", "01");
	write(1, "\n", 1);
    /*
	ft_convert_base(INT_MAX, "0123456789");
	write(1, "\n", 1);
	ft_convert_base(INT_MIN, "0123456789");
	write(1, "\n", 1);
	ft_convert_base(0, "0123456789");
	write(1, "\n", 1);
	ft_convert_base(32, "01");
	write(1, "\n", 1);
	ft_convert_base(INT_MAX, "01");
	write(1, "\n", 1);
	ft_convert_base(3635, "0123456789abcdef");
	write(1, "\n", 1);
	ft_convert_base(-3635, "0123456789abcdef");
	write(1, "\n", 1);
	ft_convert_base(INT_MAX, "0123456789abcdef");
	write(1, "\n", 1);
	ft_convert_base(INT_MIN, "0123456789abcdef");
    */
}