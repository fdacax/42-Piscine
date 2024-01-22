/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:25:39 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/08 21:25:42 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 1;
	while (1 <= power)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);
		printf("%i", ft_iterative_power(x, y));
	}
}
*/
