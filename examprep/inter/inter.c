#include <unistd.h>

int 	main(int argc, char **argv)
{
	char 	tab [256] = {0};
	int 	i;
	
	i = 0;
	if (argc == 3)
	{
		while (argv[2][i])
		{
			tab[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (tab[(int)argv[1][i]] == 1)
			{	
				write(1, &argv[1][i], 1);
				tab[(int)argv[1][i]] = 2;
			}
		i++;
		}
	}
	
		write(1, "\n", 1);
}

		
