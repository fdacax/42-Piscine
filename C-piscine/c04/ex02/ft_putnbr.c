/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:48:04 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/01 13:48:25 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		write (1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar (nb + 48);
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putchar ((nb % 10) + 48);
	}
}
/*
#include <stdio.h>
int main(void)
{
    printf("type a number: \n");
    int nb;
    scanf("%d", &nb);
    ft_putnbr(nb);
}
*/
//func mostrar todos numeros inteiros
//- 2.147.483.648 && 2.147.483.674
//V p/ imprimir num -, colocamos passamos para positivo - na frente
//V  min int, "-" int min
//se < 10 && >= 0 somar + 0
// dividir por 10 ate < 9 // >0 +(48(0))
// modulo de 10 para nos dar o resto
