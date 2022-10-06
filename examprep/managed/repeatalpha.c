
#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else 
		repeat = 1;
}

int	main(int argc, char **argv)
{
	int	repeat;
	int	i;

	if (argc == 2)
	{	
		while (argv[1][i])
		{
			repeat = letter_count(argv[1][i]);
				while (repeat > 0)
				{	
					write(1, &argv[1][i], 1);
					repeat--;
			}
		i++;
		}
	}
	write(1, "\n", 1);
}
