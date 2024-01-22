/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:55:43 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/08/03 13:14:56 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	toy;
	int	count_less;

	count_less = 0;
	toy = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			count_less++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		toy = toy * 10 + (str[i] - 48);
		i++;
	}
	if (count_less % 2 != 0)
		toy *= -1;
	return (toy);
}

#include <stdio.h>
#include <unistd.h>
int main(void)
{
    char x[] = "";
    printf("%i", ft_atoi(x));
}

