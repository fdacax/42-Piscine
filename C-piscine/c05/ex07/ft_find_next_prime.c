/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:39:33 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/08 14:39:41 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_find_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int x = atoi(av[1]);
		printf("%i", ft_find_next_prime(x));
	}
}
*/