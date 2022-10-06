/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:39:13 by reapen            #+#    #+#             */
/*   Updated: 2022/10/04 18:45:24 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
