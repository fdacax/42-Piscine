/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:03:39 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/23 14:51:14 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	d;

	f = 0;
	while (f <= 98)
	{
		d = f + 1;
		while (d <= 99)
		{
			ft_putchar('0' + f / 10);
			ft_putchar('0' + f % 10);
			ft_putchar(' ');
			ft_putchar('0' + d / 10);
			ft_putchar('0' + d % 10);
			if (f != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		f++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
}
*/
