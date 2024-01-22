/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:22:53 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:32:34 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
  printf("digit a number\n");
    char x;
    scanf("%s", &x);
    printf("%i\n", ft_str_is_numeric(&x));
}
*/
