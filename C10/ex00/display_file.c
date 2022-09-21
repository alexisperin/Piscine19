#include <fcntl.h>
#include <unistd.h>
#include "display_file.h"

void	display_file(char *file_name)
{
	int		file;
	int		size;
	char	buf[1000];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		ft_putstr("Cannot read file.\n", 2, 0);
	else
	{
		while ((size = read(file, buf, 1000)) != 0)
		{
			if (size == -1)
			{
				ft_putstr("Cannot read file.\n", 2, 0);
				break ;
			}
			ft_putstr(buf, 1, size);
		}
	}
	close(file);
}