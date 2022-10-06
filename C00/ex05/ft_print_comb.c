/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:27:06 by reapen            #+#    #+#             */
/*   Updated: 2022/09/16 13:50:51 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{	
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{	
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(k + 48);
				if ((i + j + k) != (7 + 8 + 9))
					write(1, ", ", 2);
			k++;
			}
		j++;
		}	
	i++;
	}			
}
