/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:05:19 by reapen            #+#    #+#             */
/*   Updated: 2022/09/27 14:44:05 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		write(1, "-2147483648", 11);
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}	
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
