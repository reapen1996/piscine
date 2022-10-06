/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reapen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:39:26 by reapen            #+#    #+#             */
/*   Updated: 2022/09/25 17:51:46 by reapen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] && str[i])
		{	
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
