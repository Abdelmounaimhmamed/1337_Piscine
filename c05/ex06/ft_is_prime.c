/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:07:37 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 20:12:41 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = nb / 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= n)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
