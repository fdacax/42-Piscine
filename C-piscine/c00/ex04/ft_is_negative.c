/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdacax-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:55:02 by fdacax-m          #+#    #+#             */
/*   Updated: 2023/07/23 14:38:51 by fdacax-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
	}
	else
	{
		n = 'N';
	}
	write(1, &n, 1);
}
/*
int main()
{
    printf("digite um numero\n");
    int n;
    scanf("%d", &n);
    ft_is_negative(n);
}
*/