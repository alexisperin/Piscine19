#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}