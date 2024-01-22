/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:23:11 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/07 17:23:13 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + 
		ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int x = atoi(av[1]);
		printf("%i", ft_fibonacci(x));
	}
}
*/
