/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:22:02 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/07 20:22:06 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;

	
	x = atoi(av[1]);
	printf("%i", ft_sqrt(x));
}
*/