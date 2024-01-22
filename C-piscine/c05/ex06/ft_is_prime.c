/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:48:16 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/08 13:48:20 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// número é primo se ele for divisível 
//(divisão inteira) apenas por si mesmo e por 1
//n exise primo par exeto o 2
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int x = atoi(av[1]);
		printf("%i", ft_is_prime(x));
	}
}
*/
