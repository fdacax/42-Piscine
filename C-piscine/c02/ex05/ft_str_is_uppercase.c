/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:29:15 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:35:02 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
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
    printf("digit a word:\n");
    char x;
    scanf("%s", &x);
    printf("%d\n",ft_str_is_uppercase(&x));
}
*/
