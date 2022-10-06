/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:01:42 by reapen            #+#    #+#             */
/*   Updated: 2022/10/01 20:43:17 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * nbr;
		i--;
	}
	return (nb);
}
