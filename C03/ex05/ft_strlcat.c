unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	size_dest = 0;
	size_src = 0;
	i = 0;
	while (dest[size_dest])
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size <= size_dest)
		return (size_src + size);
	while (src[i] && (size_dest + i) < (size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_src + size_dest);
}