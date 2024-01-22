/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:25:26 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:30:22 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') 
		&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);

		i++;
	}
	return (1);
}
/*
int main(void)
{
    printf(" digit a word \n");
    char x;
    scanf("%s", &x);
    printf("%i\n", ft_str_is_alpha(&x));
}
*/