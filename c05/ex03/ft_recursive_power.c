/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:52:05 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 19:55:35 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_recursive_power(int nb, int power) // int ft_recursive_power(int nb, int power);
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb * ft_recusrsive_power(nb, power - 1));
	return (1);
}

int main(){
	int m = ft_recursive_power(5,2);
	printf("%d",m);
	return 0;
}