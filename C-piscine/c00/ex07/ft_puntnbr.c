/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puntnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:49:19 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/23 17:18:30 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}
/*
int main(void)
{
    printf("Digit a number: \n");
    int nb;
    scanf("%d", &nb);
    ft_putnbr(nb);
    return(0);
}
*/