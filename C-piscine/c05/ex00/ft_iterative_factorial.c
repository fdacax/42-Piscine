/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:59:50 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/06 19:59:57 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	z;

	if (nb < 0)
		return (0);
	z = 1;
	while (nb > 0)
	{
		z *= nb;
		nb--;
	}
	return (z);
}

/*
#include <stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int x = atoi(av[1]);
		printf("%i\n", ft_iterative_factorial(x));
	}
}
*/
