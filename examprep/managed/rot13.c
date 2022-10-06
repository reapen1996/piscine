#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'N' & c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	return (c);
}

int	main(int argc, char **argv)
{		
	int	i;

	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			ft_putchar(rot_13(argv[1][i]));
			i++;
		}
	}
	write(1, "\n", 1);
}

