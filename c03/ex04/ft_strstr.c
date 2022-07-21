/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:05:58 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 12:24:10 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	fail;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			fail = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					fail = 1;
				i++;
			}
			if (fail == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
