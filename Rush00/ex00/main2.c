void rush(int x, int y);

int main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	rush(*argv[1] - 48, *argv[2] - '0');
	return (0);
}