#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[i] && str1[j])
	{
		if (str2[i] == str1[j])
			j++;
	i++;
	}
	if (j == ft_strlen(str1))
		ft_putstr(str1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
	
