/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:56:52 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:41:51 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
    printf("digit anything\n");
    char x;
    scanf("%s", &x);
    printf("%d", ft_str_is_printable(&x));
}
*/
