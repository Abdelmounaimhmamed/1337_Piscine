/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:01:18 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 20:06:51 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	i = 0;
	if (nb == 1)
		return (nb);
	if (nb > 10000000)
	{
		n = nb / 20;
	}
	else
	{
		n = nb / 2;
	}
	while (i < n && n > 0)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
