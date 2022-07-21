/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:21:12 by ahmamed           #+#    #+#             */
/*   Updated: 2022/06/19 19:25:23 by ahmamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char a , char b , char c ){
	write(1,&a,1);
	write(1,&b,1);
	write(1,&c,1);
}
void ft_print_comb(void) { 
	char sep[2] = {' ' ,','} ;
	char a = '0' ;
	char b = '1' ; 
	char c = '2' ; 
	while (a<='7'){
		b=a+1;
		while (b<='8'){
			c=b+1;
			while (c<='9'){
				ft_putchar(a,b,c);
				if (a!='7' || b !='8' ||  c!= '9'){
					write(1,sep,2);
				}
				c++;
			}
		b++;
		}	
	a++;
	}	
}
