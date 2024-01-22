/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:07:03 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/07 12:07:08 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	z;

	if (nb < 0)
		return (0);
	z = 1;
	if (nb > 0)
	{
		z *= nb * ft_recursive_factorial(nb -1);
	}
	return (z);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
	int x = atoi(av[1]);
	printf("%i\n", ft_recursive_factorial(x));

	}
}
*/
