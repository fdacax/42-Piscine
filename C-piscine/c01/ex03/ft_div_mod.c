/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:17:10 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/27 13:20:47 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int a;
    int b;
    int c;
    int d;

    a = 13;
    b = 10;

    ft_div_mod(a, b , &c, &d);
    printf("%i\n", c);
    printf("%i\n", d);
}
*/
