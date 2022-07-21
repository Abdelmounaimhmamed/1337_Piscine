/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:31:26 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 19:40:02 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alphanumeric(char c)
{
	if (
		(c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	)
	{
		return (1);
	}
	return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if ((i == 0) && ft_is_lowercase(str[i]))
		{
			str[i] = (str[i] - ('a' - 'A'));
		}
		if (!ft_is_alphanumeric(str[i]) && str[i + 1] != '\0')
		{
			if (ft_is_lowercase(str[i + 1]))
			{
				str[i + 1] = (str[i + 1] - ('a' - 'A'));
			}
		}
		if (
			(i != 0)
			&& ft_is_uppercase(str[i])
			&& ft_is_alphanumeric(str[i - 1])
		)
				str[i] = str[i] + ('a' - 'A');
				i++;
	}
	return (str);
}
