#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *new_tab;
	int i;

	new_tab = malloc(length * sizeof(int));
	if (new_tab == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}