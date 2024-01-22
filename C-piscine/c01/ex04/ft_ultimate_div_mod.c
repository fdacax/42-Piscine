/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:18:55 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/27 13:22:31 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod( int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
int main(void)
{
    int a;
    int b;
    
    a = 13;
    b = 10;
    

    ft_ultimate_div_mod (&a, &b);
    printf("%i\n", a);
    printf("%i\n", b);
}
*/
