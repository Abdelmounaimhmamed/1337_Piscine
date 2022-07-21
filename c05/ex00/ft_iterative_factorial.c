/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:06:17 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 13:09:08 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb) // int ft_iterative_factorial(int nb);
{
	int	n;

	n = 1;
	if (nb < 1)
	{
		return (0);
	}
	while (nb >= 1)
	{
		n = n * nb;
		nb--;
	}
	return (n);
}

int main(){
	
	int n = 5;
	int m =ft_ietrative_factorial(n);
	printf("%d",m);
	return 0;
}
