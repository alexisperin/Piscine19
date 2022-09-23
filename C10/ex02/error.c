#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "ft_tail.h"

void	display_error(char *prog_name, char *filename, int error)
{
	ft_putstr(basename(prog_name), STDERR, 0);
	ft_putstr(": ", STDERR, 2);
    if (error == 0)
    {
        ft_putstr(filename, STDERR, 0);
        ft_putstr(": ", STDERR, 2);
        ft_putstr(strerror(errno), STDERR, 0);
    }
    else if (error == 1)
        ft_putstr("Not enough input arguments", STDERR, 0);
	else if (error == 2)
        ft_putstr("Illegal option", STDERR, 0);
    ft_putstr("\n", STDERR, 1);
}