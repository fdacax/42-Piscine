/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:23:05 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/07 16:23:37 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		nb = nb * (ft_recursive_power(nb, power - 1));
		return (nb);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 3)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);
		int z = ft_recursive_power(x, y);
		printf("%d", z);
	}
}
*/
