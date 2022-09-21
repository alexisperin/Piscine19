#include "display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		display_file(argv[1]);
	return (0);
}