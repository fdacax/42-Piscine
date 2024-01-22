/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:19:01 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/30 15:30:39 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
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
    printf("digit a word\n");
    char x;
    scanf("%s", &x);
    printf("%d\n",ft_str_lowercase(&x));
}
*/
