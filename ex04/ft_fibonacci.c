/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:42:20 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/25 14:08:20 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	if( i == 0) {
		return 0;
	}
	
	if( i == 1) {
		return -1;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}

int main()
{
	int i;

		for (i = 0; i < 4; i++) {
	         printf("%d\n\x", fibonacci(i));
			 return 0;
		}
}
