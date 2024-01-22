/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:32:54 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/29 20:44:10 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    printf("type a sentence\n");
    char x;
    scanf("%s", &x);
    printf("%s\n",ft_strupcase(&x));
}
*/
