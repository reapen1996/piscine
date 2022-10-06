/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:32:22 by reapen            #+#    #+#             */
/*   Updated: 2022/10/06 19:06:33 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
